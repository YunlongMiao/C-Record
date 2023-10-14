'''
Author: 苗云龙
Date: 2023-04-30 01:02:04
LastEditors: YunLongMiao 3082425826@qq.com
LastEditTime: 2023-04-30 09:15:49
Description: 
FilePath: \c++\1.py
  风起云涌
'''
from pprint import pprint
a = [[i*1,i*2,i*3,i*4,i*5,i*6] for i in range(7)]
pprint(a)
# print(a[2:4])
b = []
for i in a[2:4]:
    b.append(i[1:3])

print(b)