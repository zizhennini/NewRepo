"""
 给三个整数 a,b,c 如果一个数同时不是 a , b , c 的整数倍，则这个数为反倍数
"""
n = int(input())
a,b,c = map(int,input().split())    # 将输入的字符串用split()以空格分割以map方法转为整数同时赋值给a,b,c
Sum=0
for i in range(1,n+1):
    # 将 1 ~ n 遍历出的 i 判断其是否同时为a,b,c的倍数
    if i % a != 0 and i % b !=0 and i % c !=0:
        # 计算同时不是 a , b , c 的整数倍，则这个数为反倍数的数 i 的个数和，即累加符合的数的个数
        Sum += 1

print(Sum)
