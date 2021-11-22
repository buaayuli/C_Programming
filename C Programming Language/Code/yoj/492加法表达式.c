#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[16];
    long long sum[1000];
    int i, j, k, count = 0;
    int len;
    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len - 3; i++)//分成四个部分遍历
        for (j = i + 1; j < len - 2; j++)
            for (k = j + 1; k < len - 1; k++) {
                char s1[16] = {0}, s2[16] = {0}, s3[16] = {0}, s4[16] = {0};
                strncpy(s1, s, i + 1);//第一部分存到s1
                strncpy(s2, s + i + 1, j - i);
                strncpy(s3, s + j + 1, k - j);
                strncpy(s4, s + k + 1, len - k);
                sum[count] = atoll(s1) + atoll(s2) + atoll(s3) + atoll(s4);//计算总和，注意要转化为long long
                count++;
            }
    for (i = 0; i < count; i++)//排序
        for (j = 0; j < count - i - 1; j++)
            if (sum[j] < sum[j + 1]) {
                long long temp = sum [j];
                sum [j] = sum[j + 1];
                sum [j + 1] = temp;
            }

    for (i = 0; i < count; i++)
        printf("%lld ", sum[i]);


    return 0;
}