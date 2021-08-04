#include <stdio.h>

/*****************************************************************/
/*****************************************************************/
/**************** A program to take 2 integers from the user *****/
/****************    and print the result of an equation    ******/
/*****************************************************************/
/*****************************************************************/
/*****************************************************************/

int main ()
{
	/* variables declaration */
	int x,y,result;
	/* taking the two values*/
	printf("enter the first integer : ");
	scanf("%d",&x);
	printf("enter the second integer : ");
	scanf("%d",&y);
	result= ((x + y) * 3) - 10;
	/* printing the result */ 
	printf("the result = %d ", result);
	
	return 0; 
}