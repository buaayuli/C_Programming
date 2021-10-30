#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j;
    int k;
    int a[100][105] = {0};
    float sum[100], temp;
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=2; j++) {
            scanf("%d", &a[i][j]);
        }
        if (a[i][2] < 2) {
             a[i][1] = 0;
             sum[i] = 0;
        }
        for (j=3; j <= a[i][2]+2; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
        sum[i] = sum[i] / a[i][2];
        k = (int)(100 * sum[i]);
        sum[i] = k / 100.0;
    }
    for (i=1; i<n; i++)
        for (j=1; j<=n-i; j++)
            if (sum[j] < sum[j+1] || sum[j] == sum[j+1] && a[j][1]>a[j+1][1]) {
                temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp;
                temp = a[j][1];
                a[j][1] = a[j+1][1];
                a[j+1][1] = temp;
            }
    int flag = 0;
    for (i=1; i<=n; i++)
        if (a[i][1] != 0) {
            printf("%d %.2f\n", a[i][1], sum[i]);
            flag = 1;
        }
    if (flag == 0)
        printf("NO");
    
    return 0;
}