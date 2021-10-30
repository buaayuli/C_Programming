#include <stdio.h>

int main() 
{
    int n, m;
    int i, j, temp;
    int a[1000] = {0};
    scanf("%d %d", &n, &m);
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    for (i=0; i<n-1; i++)
        for (j=0; j<n-i-1; j++)
            if (a[j]>a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    int left = 0, right = n-1;
    int mid;
    int count = 0;
    int flag = 0;
    for (i=0; i<n; i++) {
        if (right>=left) {
            count++;
            mid = (left + right) / 2;
            if (a[mid] == m) {
                printf("%d\n%d", mid, count);
                flag = 1;
                break;
            } else if (m < a[mid]) 
                right = mid - 1;
            else
                left = mid + 1;
        } else
            break;
    }
    if (flag == 0)
        printf("-1\n%d", count);

    return 0;
}