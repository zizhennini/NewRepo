#include<stdio.h> 
void figureTrasform(int n) {
    //�ڴ�д�뺯����
    //�ں�������ʵ�����
    //ע�����������ǳ���Ҫ 
    /*****************Begin******************/
    // ��������Ƿ�Ϊ0�������0��ֱ�ӷ��أ���Ϊ����Ҫ��ӡ
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
////���������£�
//#include<stdio.h>
//#include<string.h>
//
////�˴��ѵ��� FigureTransform.hͷ�ļ�
////��������ĺ������ò���Ҫ�ٽ������� 
//#include"FigureTransform.h" 
////������ 
//#include<stdio.h>
//#include<string.h>
////�˴��ѵ��� FigureTransform.hͷ�ļ�
////��������ĺ������ò���Ҫ�ٽ������� 
//#include"FigureTransform.h" 
//������ 
//int main() {
//    long n;
//    scanf("%d", &n);
//    if (n == 0) {      //��������n��0���������0���������� 
//        putchar('0');
//       return 0;
//    }
//    figureTrasform(n);   //��������ת������ 
//    return 0;
//}