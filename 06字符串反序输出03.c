//������׼�����������
#include<stdio.h>
//�ַ��������� 
#include<string.h> 
//����������£����ڴ���ӡ�����������Ĵ���
/********** �޸����´��� **********/
char reverseOutput(char* str);
int main() {
    char str[10];
    scanf_s("%s", &str);
    reverseOutput(str);

    return 0;
}
//��������
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
/********** �޸Ĵ������� **********/
