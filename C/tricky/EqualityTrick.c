#include<stdio.h>
#include<stdlib.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to check  on             ************/         
/*************         2 numbers equlaity without == sig  ************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	
	/* variables to store the 2 numbers*/
	int x ,y , res;
	
	/*taking the two numbers from user*/

	printf("x : ");
	scanf("%d",&x);
	
	printf("y : ");
	scanf("%d",&y);
	
	
	
	/*check using xor bitwise operator */
	if ( x ^ y )
	{
		
		printf("not equal");
	}
	else
	{
		printf("equal");
	}
	
	return 0 ; 
}