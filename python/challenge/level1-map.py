# !/usr/bin/env pthon
# coding=utf-8

# Author: Moro
# blog: https://mrchens.github.io

def translate (chars):
    newChar = ""
    for c in chars:
        if c >= 'a' and c <= 'z':
            newChar += (chr(((ord(c) + 2) - ord('a')) % 26 + ord('a')))
        else:
            newChar += c
    return newChar


mapStr ="g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."
result = translate(mapStr)
print(result)
