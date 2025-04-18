"""
千位和十位相等，以及个位比百位大 1 的年份为特殊年份
"""

# 定义一个函数来判断
def year(x):
    n = 0
    for i in x:
        if 1000 <= i <= 9999:
            k = i // 1000               # 千位数字
            p = (i // 100) % 10         # 百位数字
            s = (i // 10) % 10          # 十位数字
            g = i % 10                  # 获取千位数字
            if k == s and g - p == 1:   # 判断 千位和十位是否相等，以及个位是否比百位大 1
                n += 1                  # 符合的话就累计一次
    return n

# 输入五个年份
# a = int(input())
# b = int(input())
# c = int(input())
# d = int(input())
# e = int(input())
# 把输入的五个年份放到列表里，便于调用
#X = [a, b, c, d, e]

print(year([int(input()) for i in range(5)]))







