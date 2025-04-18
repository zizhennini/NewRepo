#include <stdio.h>

int main() {
    char s1[20], s2[20];
    scanf_s("%s %s", s1, s2);

    int sum1 = 0, sum2 = 0;
    int i = 0;
    while (s1[i] != '\0') {
        sum1 += s1[i];
        i++;
    }
    i = 0;
    while (s2[i] != '\0') {
        sum2 += s2[i];
        i++;
    }

    int result = sum1 - sum2;
    printf("%d", result);

    return 0;
}