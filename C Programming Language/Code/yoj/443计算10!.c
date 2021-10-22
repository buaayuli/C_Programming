#include <stdio.h>

int main(){

	int i, f=1;
	for (i=1; i<=10; i++)
		f *= i;
	printf("%d", f);
	
	return 0;
}