#include <stdio.h>

int main()
{
    int N;
	int count = 0;
    scanf("%d", &N);
    while(1)
    {
        int y;
        y = N % 10;
        printf("%d,", y);
		count++;
		if(N / 10 == 0)
		{
			break;
		}
        N = N / 10;
    }
    printf("%d", count);
    return 0;
}