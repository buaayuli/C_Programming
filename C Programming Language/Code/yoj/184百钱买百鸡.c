#include <stdio.h>  
  
int main()  
{  
    int a, b, c, n, count=0;  

    scanf("%d", &n);  
    for (a=0; a<n/5; a++)  
        for (b=0; b<n/3; b++)  
            for (c=0; c <= n; c += 3)  
                if (a+b+c == n && a*5+b*3+c/3 == n) {  
                    printf("%d %d %d\n", a, b, c);  
                    count++;  
                }  
    printf("%d", count);

    return 0;  
}