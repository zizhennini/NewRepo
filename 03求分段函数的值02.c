//函数 y={x（x<1）；2x-1(1<=x<10)；3x-11(x>=10)；
#include <stdio.h>

//定义main函数
int main()
{
    //请在此添加‘求分段函数的值’的代码
    /*****************Begin******************/
    float x;
    scanf_s("%f", &x);
    if (x < 1)
        printf("%g", x);
    else if (1 <= x && x < 10)
        printf("%g", 2 * x - 1);
    else
        printf("%g", 3 * x - 11);
    /***************** End ******************/
    return 0;
}
