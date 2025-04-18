
n = int(input())         # 输入待查找的整数
data = []                # 初始化一个空列表 data
for i in range(200):
    data.append(4 * i + 6)  # 把遍历出来的i进行 (4 * i) + 6 处理后添加到data列表里用于对输入的整数n查找对应的下标

left = 0                    # 对二分法左边界初始化
right = len(data) - 1       # 对二分法右边界初始化

while left <= right:        # 设置一个循环条件，left <= right时继续找
    mid = (left + right) // 2   # 计算中间位置的索引

    if n > data[mid]:               # 整数 n 大于中间位置元素的值，n在data[mid]右侧，更新左边界
        left = mid + 1
    elif n < data[mid]:             # 整数 n 小于中间位置元素的值，n在data[mid]右侧，更新右边界
        right = mid - 1
    else:                           # 都不满足的话，就只有data[mid]=n了,即n的下标为mid
        print(mid)                  # 输出其索引，结束
        break

