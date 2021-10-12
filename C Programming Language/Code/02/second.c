/*
 * second.c

 */


#include <stdio.h>
int main() // a simple program
{

   int num1 = 10, num2 = 5; //declare two variables /
   int sum, max=0; // declare two variables
   max=0;
   num2 = 15; // assign a value to the variable
   // Compute the summation
   sum = num1 + num2;
   
   sum++;
   printf("Sum of the two numbers: %d\n", sum);
   // Compute the maximum value
   if (num1 >= num2)
   {
	   max = num1;
   } else {
	   max = num2;
   }
   printf("Max of the two numbers: %d", max);
   return 0;
}
