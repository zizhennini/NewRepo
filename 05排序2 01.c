//������׼�����������
#include <stdio.h>
//����main����
int main()
{
    //���ڴ���ӡ�����2���Ĵ���
    /*****************Begin******************/
    int nums[10];
    for (int x = 0; x < 10; x++) {
        scanf_s("%d", &nums[x]);
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                int num = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = num;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    /***************** End ******************/
    return 0;
}
