#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to reverse               ************/         
/************* 		   a given input number               ************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	/*variables to store the given number*/
	int num=0 , extracted_rem=0 , reversed=0;
	
	/*take the number from the user*/
	printf("\nEnter the number to be reversed : ");
	scanf("%d",&num);
	
	reversed =  reverse_number(num);
	/*printing the reversed number */
	printf("the reversed number : %d", reversed);

	return 0;
}