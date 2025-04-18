#include<stdio.h> 
void figureTrasform(int n) {
    //在此写入函数体
    //在函数体内实现输出
    //注意主函数，非常重要 
    /*****************Begin******************/
    // 检查数字是否为0，如果是0，直接返回，因为不需要打印
    if (n == 0)
        return;
    if (n < 0) {
        putchar('-');
        putchar(' ');
        n = -n;
    }
    if (n > 9) {
        figureTrasform(n / 10);
    }


    putchar(n % 10 + '0');
    putchar(' ');
    /***************** End ******************/
}
////主函数如下：
//#include<stdio.h>
//#include<string.h>
//
////此处已导入 FigureTransform.h头文件
////所以下面的函数调用不需要再进行声明 
//#include"FigureTransform.h" 
////主函数 
//#include<stdio.h>
//#include<string.h>
////此处已导入 FigureTransform.h头文件
////所以下面的函数调用不需要再进行声明 
//#include"FigureTransform.h" 
//主函数 
//int main() {
//    long n;
//    scanf("%d", &n);
//    if (n == 0) {      //如果输入的n是0，则输出‘0’，结束。 
//        putchar('0');
//       return 0;
//    }
//    figureTrasform(n);   //调用数字转换函数 
//    return 0;
//}