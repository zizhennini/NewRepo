//包含标准输入输出函数
#include <stdio.h>
//定义main函数
int main()
{
    //请在此添加‘排序2’的代码
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
