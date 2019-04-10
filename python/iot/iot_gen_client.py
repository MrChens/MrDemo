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
    with open('device.csv', 'rb') as csvfile:
        f = open('output.txt', 'a+')
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
