#include <stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to print number          ************/         
/*************         	 of digits in a number			  ************/ 
/*********************************************************************/
/*********************************************************************/
int main()
{
   /* variables to store the  number , counter*/
	int x ,res, count=0;

	printf("enter x : ");
	scanf("%d",&x);
    res= num_of_digits (x);
	
	printf("number of digits : %d", res);
    return 0;
}