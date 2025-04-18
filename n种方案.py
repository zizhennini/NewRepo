"""
 1 ~ n 的 n 个正整数排成一列后随机打乱顺序，按字典序输出所有不同的方案
"""
# 导入 itertools 模块
# 这里我们会使用其中的 permutations 函数来生成全排列
import itertools

# 输入的一个整数 n
n = int(input())

# 使用列表推导式生成一个包含从 1 到 n 的正整数的列表 nums
nums = [x for x in range(1, n + 1)]

# itertools.permutations(nums) 用于生成 nums 列表中元素的所有不同排列组合
# 遍历这些排列组合
for num in itertools.permutations(nums):
    # map(str, num) 会将排列组合中的每个数字转换为字符串
    # ' '.join(...) 会将这些字符串用空格连接起来，形成一个字符串
    # 最后将这个字符串打印输出
    print(' '.join(map(str, num)))