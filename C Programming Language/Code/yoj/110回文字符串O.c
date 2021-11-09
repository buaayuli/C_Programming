#include <stdio.h>
#include <string.h>

int main(){
    char a[1000], b[1000];
    int i;
    gets(a);
    for(i = 0; i < strlen(a); i++)
        b[i] = a[strlen(a) - 1 - i];
    if(strcmp(a,b) == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}