//������׼�����������
#include <stdio.h>
//����main����
int main()
{
    //���ڴ���ӡ�����С�����������Լ�����Ĵ���
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
