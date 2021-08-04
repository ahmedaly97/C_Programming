#include <stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************ A program to take 2numbers and one operand  ************/         
/*************  and returns the result using functions	  ************/ 
/*********************************************************************/
/*********************************************************************/


int calc(int x, char op , int y);

int main ()
{
		
	/* variables to store the numbers*/
	int num1 ,num2, result;
	
	/*char variable to store operand*/
	char op ;
	
	/*taking number1 from user*/
	printf("Enter num1 : ");
	scanf("%d",&num1);
	
	/*taking the operand from the user*/
	printf("Enter the operand : ");
	scanf(" %c",&op);
	
	/*checking for the input operand*/
	while( (op != '+') && (op != '-') && (op != '*') && (op != '/')  )
	{
		printf("\"invalid operand\"");
		
		printf("\nEnter the operand again: ");
		scanf(" %c",&op);
		
	}
	
	
	/*taking  number2 from user*/
	printf("Enter num2 : ");
	scanf("%d",&num2);
	
	result = calc(num1, op , num2);
	
	printf("the result is %d",result);
	
	
	return 0;
}


int calc(int x, char op , int y)
{
	
	switch(op)
	{
		case '+':
		   return x+y;
		   break;
		case '-':
		     return x-y;
		   break;
		case '*':
		     return x*y;
		   break;
	    case '/':
		     return x/y;
		   break;
	    default:
           printf("the entered op is not allowed"); 		
	}
	
}