//������׼�����������
#include<stdio.h>
#include<math.h>
//����������£����ڴ���ӡ������жϡ��Ĵ���
/********** �޸����´��� **********/
int isPrime();
int main() {
    int x, result;
    scanf_s("%d", &x);
    result = isPrime(x);
    if (result == 1) {
        printf("%d��һ������", x);
    }
    else {
        printf("%d����һ������", x);
    }
    return 0;
}
//��������
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