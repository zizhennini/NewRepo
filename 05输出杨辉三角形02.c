//������׼�����������
#include <stdio.h>
//����main����
int main()
{
    //���ڴ���ӡ����n����������Ρ��Ĵ���
    /*****************Begin******************/
    int nums[19][19];
    int n;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {//
            if (j == 0 || j == i) {
                nums[i][j] = 1;
            }
            else {
                nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == i) {
                printf("%d", nums[i][j]);
            }
            else {
                printf("%d ", nums[i][j]);
            }
        }
        printf("\n");
    }
    /***************** End ******************/
    return 0;
}
