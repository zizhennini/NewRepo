//������׼�����������
#include <stdio.h>
void num(int* x, int* y) {
    int sum = *x;
    *x = *y;
    *y = sum;
}
//����main����
int main()
{
    //���ڴ���ӡ�ʵ�������������򡯵Ĵ���
    /*****************Begin******************/
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);
    int* p1 = &a, * p2 = &b, * p3 = &c;
    if (*p1 < *p2) {
        num(p1, p2);
    }
    if (*p1 < *p3) {
        num(p1, p3);
    }
    if (*p2 < *p3) {
        num(p2, p3);
    }
    printf("%d %d %d", *p1, *p2, *p3);
    /***************** End ******************/
    return 0;
}
