



n = int(input())  # 输入的整数n，范围是从1到15

# 从0到2的n次方减1正序遍历
for num in range(2 ** n):
    nums = []  # 用于存储当前组合中选中的数字

    # 将num转换为长度为n的二进制字符串，不足n位的在前面补0
    # bin(num) 将整数num转换为二进制字符串，
    # [2:] 用于去掉二进制字符串前缀的 '0b'
    # zfill(n) 是字符串的方法，它会在字符串左侧填充0，使字符串总长度达到n
    bin_str = bin(num)[2:].zfill(n)

    # 遍历二进制字符串的每一位，同时获取其索引
    for index, bit in enumerate(bin_str):
        if bit == '1':  # 如果当前位是1
            # 将对应的位置加1（因为索引从0开始，而我们要的数字是从1开始），并添加到nums列表中
            nums.append(str(index + 1))

    # 如果nums列表中有元素，就用空格连接并输出这些元素
    if nums:
        print(" ".join(nums))
    else:  # 如果nums列表为空，就输出一个空行
        print()



# n = int(input())
# for i in range(1, 1 << n):
#     # 生成二进制字符串并 补 前导零到n位
#     binary = bin(i)[2:].zfill(n)
#     # 从右到左解析二进制位（最低位对应数字n，高位对应数字1）
#     selected = []
#     for j in range(n):
#         if binary[-j-1] == '1':  # 从右往左检查每一位
#             selected.append(n - j)  # 根据位置映射到具体数字
#     selected.sort()  # 按升序排列数字
#     print(" ".join(map(str, selected)))