#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) {
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld  ", &num);

	while (status == 1) {
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
		printf("status=%d  ", status);
	}
	printf("Those integers sum to %ld.\n", sum);
	return 0;
}
