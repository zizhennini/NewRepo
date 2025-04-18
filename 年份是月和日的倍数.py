"""
从 2000 年 1 月 1 日 到 2000000 年 1月 1 日 有多少个日期满足年份同时是月份和日的倍数
"""
# def yer():
#     years = 0
#     for y in range(2000,2000000+1):
#         for m in range(1,13):
#             if y % m ==0:
#                 years += 1
#             print(years)
#
# years = 1
# day = [0,31,28,31,30,31,30,31,31,30,31,30,31]
# for y in range(2000,2000000):
#     if y % 4 == 0 or (y % 100 != 0 and y % 400 == 0):
#         day[2] = 29
#     else:
#         day[2] = 28
#     for m in range(1,12+1):
#         for r in range(1,day[m]+1):
#             if y % m ==0 and y % r == 0:
#                 years += 1
# print(years)



# years = 1
# day = [0,31,28,31,30,31,30,31,31,30,31,30,31]
# for y in range(2000,2000000):
#
#     for m in range(1,12+1):
#         if m==2:
#             if y % 4 == 0 or (y % 100 != 0 and y % 400 == 0):
#                 day[2] = 29
#             else:
#                 day[2] = 28
#         for r in range(1,day[m]+1):
#             if y % m ==0 and y % r == 0:
#                 years += 1
# print(years)

Sum = 1     # 2000000年1月1日刚好是，所以初始值1
# 定义一个列表来存储每月的天数,其中 0 是其一 month[j]即month[1]开始
# 这里先假设2月有28天，后面会根据是否是闰年来调整2月的天数
month = [0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

# 遍历2000年到2000000年的每个年份
for i in range(2000, 2000000):

    # 遍历每个月
    for j in range(1, 12 + 1):
        if j == 2:
            # 判断一下是不是闰年来确定 2月的天数
            if (i % 4 == 0 and i % 100 != 0) or i % 400 == 0:
                month[2] = 29
            else:
                month[2] = 28
        # 遍历每个月的每一天
        for k in range(1, month[j] + 1):
            # 判断一下是否满足年份同时是月份和日的倍数
            if i % j == 0 and i % k == 0:
                Sum += 1    # 满足条件就累加 1
print(Sum)

# 这内存PyCharm都难受












