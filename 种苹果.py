
N, M = map(int, input().split())          #  输入 N 个可种植苹果的位置，M 个树苗
num = list(map(int, input().split()))     # 将输入的字符串用split()以空格分割以map方法转为整数再转为列表
num.sort()          # 用sort()方法对输入的数升序排序，保证下面可以用二分法计算

left = 1                      # 左边界，最小间隔为 1
right = num[-1] - num[0]      # 右边界，最大间隔为最大位置坐标减去最小位置坐标

# 定义一个函数，来检查在给定间隔 k 下可不可以种下 M 个树苗
def check(k):
    x = 1           # 第一个位置肯定会种一棵树苗
    d = num[0]      # 初始为第一个位置的坐标
    # 遍历除第一个位置外的其他位置
    for s in num[1:]:
        # 现在位置跟前一个种植位置的距离大于等于给定间隔k，已种植的树苗数量就加 1
        if s - d >= k:
            x += 1
            # 更新前一个种植位置的坐标为当前位置
            d = s
    # 种植的树苗数量大于等于 M，证明间隔可以返回True，不行就False
    if x >= M:
        return True
    else:
        return False

while left <= right:
    # 计算中间间隔
    mid = (left + right) // 2
    # 调用函数check如果返回True，就是说中间间隔可以，试下更大的间隔
    if check(mid):
        left = mid + 1
    # 不行，就试下更小的间隔
    else:
        right = mid - 1

# 最终结果为 left - 1
print(left - 1)