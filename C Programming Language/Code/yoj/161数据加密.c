#include <stdio.h>

int main()
{
    int a[4] = {0};
    int i, d;
    scanf("%d", &d);
    for (i=3; i>=0; i--) {
        a[i] = d % 10;
        d /= 10;
    }
    for (i=0; i<4; i++)
        a[i] = (a[i] + 5) % 10;
    for (i=3; i >= 0; i--)
        if (a[i])
            break;
    for (; i >= 0; i--)
        printf("%d", a[i]);


    return 0;
}