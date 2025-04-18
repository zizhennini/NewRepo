
a = int(input())        # 输入a小时
b = int(input())        # 输入b分钟
t = int(input())        # t分钟

if ((a<0 or a>23) and (b<0 or b>59)) and 0<=t:     # 判断一下输入的数是否符合要求0<=a<=23,0<=b<=59,关键的是加上t分钟后还是在当天
     print("请输入一个0~23和0~59的整数")
else:
    if t+b > 59:              # 判断下t+b是否大于59，大于就进一位即加一小时
        m = (t+b) // 60
        f = (t+b) % 60
        a = a + m

        print(a,f,sep="\n")
    else:
        b = b+t
        print(a,b,sep="\n")