#include <stdio.h>
#include <stdbool.h>

bool isPalindromic(int n);

int main()
{
    int k, i;
    scanf("%d", &k);
    for (i = 1; i < k; i++)
        if (isPalindromic(i * i))
            printf("%d*%d=%d\n", i, i, i * i);

    return 0;
}

bool isPalindromic(int n)
{   
    if (n % 10 == 0 && n != 0)
        return false;
    
    int rev = 0;
    while (n > rev) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return n == rev || n == rev / 10;
}