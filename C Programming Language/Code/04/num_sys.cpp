#include <stdio.h>
#include <iostream>

using namespace std;


int main() {
	int num = 0;
	char ch;
	printf ("Enter a binary number: ");
	while ((ch = getchar()) != '\n') {
		num = num * 2 + (ch - '0');
	}
	printf ("%d", num);

}
