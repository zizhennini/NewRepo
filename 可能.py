"""
从1 ~ n 这 n个正整数中随机选出 m个，按字典序输出所有可能的选择方案
"""
# 导入 itertools 模块
# 这里我们会使用其中的 combinations 函数来生成组合
import itertools

# 输入的一行内容，使用 split() 方法将输入按空格分割成多个字符串，
# 再使用 map(int, ...) 将这些字符串转换为整数，分别赋值给 n 和 m
# n 正整数的范围，m 要从中选出的数字个数
n, m = map(int, input().split())

# 使用列表推导式生成一个包含从 1 到 n 的正整数的列表 nums
nums = [i for i in range(1, n + 1)]

# itertools.combinations(nums, m) 用于生成从 nums 列表中选取 m 个元素的所有不同组合
for num in itertools.combinations(nums, m):
    # map(str, num) 会将组合中的每个数字转换为字符串
    # ' '.join(...) 会将这些字符串用空格连接起来，形成一个字符串
    # 最后将这个字符串打印输出
    print(' '.join(map(str, num)))