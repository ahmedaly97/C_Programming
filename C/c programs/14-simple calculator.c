#include<stdio.h>
#include <math.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************        simple				                  ************/         
/*************      calculator        	                  ************/ 
/*********************************************************************/
/*********************************************************************/
int main()
{
	int x , y ,result;
	char op;
	
	printf("enter num1 : ");
	scanf("%d",&x);
	
	printf("enter the operator : ");
	scanf(" %c",&op);
	
	printf("enter num2 : ");
	scanf("%d",&y);
	
	result=SimpleCalculator ( x , op,  y);
	printf("the result = %d",result);

	
	return 0;
}