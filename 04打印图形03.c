//包含标准输入输出函数
#include <stdio.h>
//定义main函数
int main()
{
    //请在此添加‘输出菱形’的代码
    /*****************Begin******************/
    int n, i, j;
    scanf_s("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    /***************** End ******************/
    return 0;
}
