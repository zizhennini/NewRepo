#include <stdio.h>
//����main����
int main()
{
    //����������
    float a, b, c;
    //���ڴ���ӡ����������������ɴ�С˳����������������Ĵ���
    /*****************Begin******************/
    scanf_s("%f %f %f", &a, &b, &c);
    if (a > b && a > c) {                    //Ƕ���ж�
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
