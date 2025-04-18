//包含标准输入输出函数
#include<stdio.h>
#include<math.h>
//基本框架如下，请在此添加‘素数判断’的代码
/********** 修改以下代码 **********/
int isPrime();
int main() {
    int x, result;
    scanf_s("%d", &x);
    result = isPrime(x);
    if (result == 1) {
        printf("%d是一个素数", x);
    }
    else {
        printf("%d不是一个素数", x);
    }
    return 0;
}
//函数主体
int isPrime(int x) {
    int n;
    if (x < 2) {
        return 0;
    }
    if (x == 2) {
        return 1;
    }
    for (n = 2; n < sqrt(x) + 1; n++) {
        if (x % n == 0) {
            return 0;
        }

    }
    return 1;
}