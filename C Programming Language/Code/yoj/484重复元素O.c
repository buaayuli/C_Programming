#include <stdio.h>

int main()
{
    int n, i, j, k, sum, flag=0;
    int a[1001];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
               k = a[j];
               a[j] = a[j + 1];
               a[j + 1] = k;
            }
        }
    }
    for (i = 0;i < n;i++)
    {
        for (j = i + 1,sum = 1;j < n;j++)
        {
            if (a[j]==a[i])
                sum++;
        }
        if (sum > 1)
        {
            flag = 1;
            printf("%d:%d", a[i], sum);
            printf("\n");
        }
        i = i + sum - 1;
    }
    if (flag == 0)
        printf("NO");

    return 0;
}