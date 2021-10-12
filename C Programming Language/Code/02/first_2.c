/*
 * first.c
 *
 */


#include <stdio.h>
int main() // a simple program            
{

 	int num,sum; /* define a variable called num */
 	num = 1; // assign a value to the variable
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
 	printf("My favorite number is %d because it is first.\n", num);
	return 0;
}
