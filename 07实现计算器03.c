//�������������£�
//
//#include <stdio.h>
//#include <stdlib.h>
////���� Calculator.h�ļ� 
//#include"Calculator.h" 
////����main����
//int main()
//{
//    //������Ҫ��ʵ��һ���������Ĺ��� 
//    int a, b, result;
//    char c;
//    scanf("%d%c%d", &a, &c, &b);
//    //���ú���ָ��ʵ�ּӼ��˳� 
//    switch (c) {
//    case '+':result = calc(a, b, add); break;  //�ӷ� 
//    case '-':result = calc(a, b, sub); break;  //���� 
//    case '*':result = calc(a, b, mult); break; //�˷� 
//    case '/':result = calc(a, b, divi); break;  //���� 
//    default:printf("ϵͳ����ʶ��������"); exit(1);  //�˳� 
//    }
//    //������ 
//    printf("%d", result);
//    return 0;
//}
//ע�����������������Ѿ�д��
int calc(int x, int y, int (*p)(int, int)) {

    //�ڴ�д�뺯����
    //�ں�������ʵ�ּ����� 
    /*****************Begin****************/
    return (*p)(x, y);

    /***************** End ****************/
}
int add(int x, int y) {
    //�ڴ�д�뺯����
    //�ں�������ʵ�ּӷ� 
    /*****************Begin****************/
    return x + y;

    /***************** End ****************/
}
int sub(int x, int y) {
    //�ڴ�д�뺯����
    //�ں�������ʵ�ּ��� 
    /*****************Begin****************/
    return x - y;

    /***************** End ****************/
}
int mult(int x, int y) {
    //�ڴ�д�뺯����
    //�ں�������ʵ�ֳ˷� 
    /*****************Begin****************/
    return x * y;

    /***************** End ****************/
}
int divi(int x, int y) {
    //�ڴ�д�뺯����
    //�ں�������ʵ�ֳ��� 
    /*****************Begin****************/
    if (y == 0) {
        return 0;
    }
    return x / y;
    /***************** End ****************/
}
