//主函数如下：
//
////包含标准输入输出函数
//#include <stdio.h>
//#include"StringCompared.h" 
////定义main函数
//int main()
//{
//    int m;  //m用于保存两个字符串中的第一个不同字符的ASCII码的差值
//    //定义两个字符数组，分别用于保存输入的两个字符串
//    char str1[20], str2[20]；
//        //定义两个指针变量，分别指向之前定义的两个字符数组
//        char* p1, * p2;
//    scanf("%s", str1);
//    scanf("%s", str2);
//    //让指针变量p1指向字符数组str1
//    p1 = str1;
//    //让指针变量p2指向字符数组str2
//    p2 = str2;
//    m = stringCompared(p1, p2);
//    printf("%d", m);
//    return 0;
//}
int stringCompared(char* p1, char* p2)
{
    //在此写入函数体
    //在函数体内实现字符串比较
    //注意主函数，主函数已经写好
    /*****************Begin****************/
    while (*p1 != '\0' && *p2 != '\0') {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }
    if (*p1 == '\0' && *p2 == '\0') {
        return 0;
    }
    if (*p1 == '\0') {
        return -(*p2);
    }
    return *p1;
    /***************** End **************/
}
