//包含标准输入输出函数
#include<stdio.h>
//字符串处理函数 
#include<string.h> 
//基本框架如下，请在此添加‘反序输出’的代码
/********** 修改以下代码 **********/
char reverseOutput(char* str);
int main() {
    char str[10];
    scanf_s("%s", &str);
    reverseOutput(str);

    return 0;
}
//函数主体
char reverseOutput(char* str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
/* or
int reverseOutput(...){
    ...
}
or else
...
*/
/********** 修改代码区间 **********/
