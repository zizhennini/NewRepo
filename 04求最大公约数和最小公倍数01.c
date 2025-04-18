//包含标准输入输出函数
#include <stdio.h>
//定义main函数
int main()
{
    //请在此添加‘求最小公倍数和最大公约数’的代码
    /*****************Begin******************/
    int a, b, d, e, f;
    double c;
    scanf_s("%d %d", &a, &b);
    c = a % b;
    e = a;
    f = b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    d = (e * f) / b;
    printf("%d %d", b, d);
    /***************** End ******************/
    return 0;
}
