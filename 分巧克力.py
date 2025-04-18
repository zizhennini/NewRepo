"""
小明需要从这 N 块巧克力中切出 K 块巧克力分给K位小朋友们。切出的巧克力需要满足：
1、形状是正方形，边长是整数;
2、大小相同;
例如一块 6x5 的巧克力可以切出 6 块 2x2 的巧克力或者 2 块 3x3 的巧克力。
当然小朋友们都希望得到的巧克力尽可能大，你能帮小明计算出最大的边长是多少么？
"""
N, K = map(int, input().split())        # N 块巧克力    分给k个人
num = []                                # 定义一个空列表 num，用于存每块巧克力的长和宽
for i in range(1,N + 1):                # 通过for循环来确定巧克力长和宽，将其转换为子列表添加到列表num中
    l,w = map(int, input().split())
    num.append([l,w])
left = 1                                # 左边界
right = max([min(x) for x in num])      # 右边界，所有巧克力长和宽中的最小值里的最大值

while left <= right:
    mid = (left + right) // 2   # 计算中间值
    d = 0                       # 定义变量 d 记录按现在的边长 mid 从所有巧克力中能切出的正方形总数
    for l,w in num:             # 遍历 num 列表中的每块巧克力
        n = (l // mid) * (w // mid)         # 巧克力长和宽分别除以 mid 后取整，再将两个结果相乘得到切割总数
        d +=n                               # 能切出的正方形数量累加到总数 d 中、
    # 如果边长 mid 切出的正方形总数大于等于要分给的人数 K，就试下更大边长，更新左边界为 mid + 1
    if d >= K:
        left = mid + 1
    else:
        right = mid - 1         # 不行就减小边长，更新右边界为 mid - 1
print(right)

