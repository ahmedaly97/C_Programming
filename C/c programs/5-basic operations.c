#include<stdio.h>
#include"help.h"
/*********************************************************************/
/*********************************************************************/
/************    A program to get the sum ,sub, div       ************/         
/**********  mul,oring,anding,xoring of a given 2inputs **************/ 
/*********************************************************************/
/*********************************************************************/

int main ()
{

	int num1,num2;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	
	printf("the sum= %d",num1+num2);
	printf("\nthe subtraction= %d",num1-num2);
	if (num2 ==0)
	{
		printf("\ncan't divide by zero");
	}
	else
	{
		printf("\nthe division= %d"	    ,num1/num2);
	}	
	printf("\nthe multiplication= %d" ,num1*num2);
	printf("\nnoring=%d",num1|num2);
	printf("\nanding%d",num1&num2);
	printf("\nxoring=%d",num1^num2);

 return 0;
}