//包含标准输入输出函数
#include <stdio.h>
//定义main函数
int main()
{
    //请在此添加‘求水仙花数’的代码
    /*****************Begin******************/
    int a, b, c, d;

    //scanf("%d",&a);
    a = 100;
    do {

        b = a / 100;
        c = (a / 10) % 10;
        d = a % 10;
        if (b * b * b + c * c * c + d * d * d == a)
            printf("%d ", a);
        a++;
    } while (a <= 999);
    /***************** End ******************/
    return 0;
}
