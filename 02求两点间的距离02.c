//������׼�����������
#include <stdio.h>
//������ѧ����
#include <math.h>
//����main����
int main()
{
	//�����һ��������꣨x1��y1��
	double x1, y1;
	//����ڶ���������꣨x2��y2��
	double x2, y2;
	//���ڴ���ӡ����������롯�Ĵ���
	/*****************Begin******************/
	scanf_s("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	double d;
	d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("%g", d);
	/***************** End ******************/
	return 0;
}
