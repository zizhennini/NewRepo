#include <stdio.h>
//定义main函数
int main()
{
    //定义三个数
    float a, b, c;
    //请在此添加‘输入三个数，按由大到小顺序输出这三个数’的代码
    /*****************Begin******************/
    scanf_s("%f %f %f", &a, &b, &c);
    if (a > b && a > c) {                    //嵌套判断
        if (b > c) {
            printf("%g %g %g", a, b, c);
        }
        else {
            printf("%g %g %g", a, c, b);
        }
    }
    else if (b > a && b > c) {
        if (a > c) {
            printf("%g %g %g", b, a, c);
        }
        else {
            printf("%g %g %g", b, c, a);
        }
    }
    else if (c > a && c > b) {
        if (a > b) {
            printf("%g %g %g", c, a, b);
        }
        else {
            printf("%g %g %g", c, b, a);
        }
    }
    /***************** End ******************/
    return 0;
}
