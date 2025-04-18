
n=input("")                 # 输入一个长度1~1000的字符串的物品英文名称
if 1<=len(n)<=1000:         # 可以检查一下长度
    m=n.endswith('s')       # 用endswith来检查最后一位为是不是s结尾，在末尾加s或es
    if m!=True:
        x=n+"s"
        print(x)
    else:
        x=n+"es"
        print(x)
