#include<stdio.h>
#include<math.h> 

int main()
{
	int a, t = 1;
	double x, st;

	scanf("%d", &a);
	
	st = a/2.0;
	x = 1/2.0 * (st + a/st);
	
	while (fabs(x-st) >= pow(10, -5))
	{
		st = x;
		x = 1/2.0 * (x + a/x);
		t++;
	}
	
	printf("%.6f\n", x);
	printf("%d\n", t);
	
	return 0;
 } 
