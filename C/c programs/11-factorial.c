#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to print the             ************/         
/*************      factorial of a given number           ************/ 
/*********************************************************************/
/*********************************************************************/
int main()
{
	/*integer variable to store the number*/
	int x, result ;
	
	/*getting the number from the user*/
	printf("enter a number : ");
	scanf("%d",&x);
	
	/*receiving the return value of the called function*/
    result = factorial(x);
	
	/*printing the received value */
	printf("the factorial of %d = %d", x , result);

	
	return 0;
}