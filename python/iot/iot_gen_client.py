#!/usr/bin/env pthon
#coding=utf-8

# Author: Moro
# blog: https://mrchens.github.io

import csv
import time
import hmac
import hashlib
import random
import string
import sys
import re
import os

def check_is_csv_file():
    # .xlsx,.xlsm,.xltx,.xltm openpyxl 支持的格式
    argLen = len(sys.argv)
    if argLen >= 3:
        return False;
    if argLen == 1:
        return False;
    arg = str(sys.argv[1])
    if re.match(r'(.*).csv$', arg):
        return True;
    return False;

def gen_username(deviceName, productKey):
    username = deviceName + "&" + productKey
    return username

# 构造password
def gen_password(deviceSecret, TimeStamp, productKey, deviceName):
    passwordStr = deviceSecret + TimeStamp + productKey + deviceName
    password = hmac.new("xxxxxx", passwordStr, hashlib.sha1).digest().encode('base64').rstrip()
    return password

# 构造clientId
def gen_clientId(timestamp):
    id = generate_random_str(32)
    clientId = id + "|securemode=1,signmethod=hmacsha1,timestamp=" + timestamp
    return clientId

# 生成随机字符串
def generate_random_str(randomlength=32):
    str_list = [random.choice(string.digits) for i in range(randomlength)]
    random_str = ''.join(str_list)
    return random_str
def main():
    if check_is_csv_file() == False:
        print('参数错误，请按照如下格式运行脚本:')
        print('python iot_gen_client.py xxxx.csv')
        exit(0)
    csvFileName = sys.argv[1]
    destination_scv = "output.txt"
    if os.path.isfile(destination_scv):
        os.remove(destination_scv)

    with open(csvFileName, 'rb') as csvfile:
        f = open(destination_scv, 'a+')
        spamreader = csv.reader(csvfile, delimiter=',', quotechar='"')
        for row in spamreader:
            deviceName = row[0]
            productKey = row[1]
            deviceSecret = row[2]
            TimeStamp = str(int(round(time.time() * 1000)))
            username = gen_username(deviceName, productKey)
            password = gen_password(deviceSecret, TimeStamp, productKey, deviceName)
            clientId = gen_clientId(TimeStamp)

            # newpwd = gen_password("1jQsoWC7HU75HhFsrxSGGjDL9VXj6SHa", "1554899381146", "OhBNE6srEoN", "mosquitto_device_demo")
            # print "good: "+ newpwd
            # print "deviceSecret: " + deviceSecret
            # print "TimeStamp: " + TimeStamp
            # print "productKey: " + productKey
            # print "deviceName: " + deviceName
            #
            # print "password: " + password
            # print "clientId: " + clientId
            # print '\n'
            f.write(deviceName+";"+productKey+";"+password+";"+clientId+'\n')
        f.close()
if __name__ == '__main__':
    main()
