//主函数代码如下：
//
//#include <stdio.h>
//#include <stdlib.h>
////包含 Calculator.h文件 
//#include"Calculator.h" 
////定义main函数
//int main()
//{
//    //本题主要是实现一个计算器的功能 
//    int a, b, result;
//    char c;
//    scanf("%d%c%d", &a, &c, &b);
//    //利用函数指针实现加减乘除 
//    switch (c) {
//    case '+':result = calc(a, b, add); break;  //加法 
//    case '-':result = calc(a, b, sub); break;  //减法 
//    case '*':result = calc(a, b, mult); break; //乘法 
//    case '/':result = calc(a, b, divi); break;  //除法 
//    default:printf("系统不能识别的运算符"); exit(1);  //退出 
//    }
//    //输出结果 
//    printf("%d", result);
//    return 0;
//}
//注意主函数，主函数已经写好
int calc(int x, int y, int (*p)(int, int)) {

    //在此写入函数体
    //在函数体内实现计算器 
    /*****************Begin****************/
    return (*p)(x, y);

    /***************** End ****************/
}
int add(int x, int y) {
    //在此写入函数体
    //在函数体内实现加法 
    /*****************Begin****************/
    return x + y;

    /***************** End ****************/
}
int sub(int x, int y) {
    //在此写入函数体
    //在函数体内实现减法 
    /*****************Begin****************/
    return x - y;

    /***************** End ****************/
}
int mult(int x, int y) {
    //在此写入函数体
    //在函数体内实现乘法 
    /*****************Begin****************/
    return x * y;

    /***************** End ****************/
}
int divi(int x, int y) {
    //在此写入函数体
    //在函数体内实现除法 
    /*****************Begin****************/
    if (y == 0) {
        return 0;
    }
    return x / y;
    /***************** End ****************/
}
