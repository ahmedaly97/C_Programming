#include<stdio.h>
#include<stdlib.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to divide              ************/         
/*************         by 2  without / sign               ************/ 
/*********************************************************************/
/*********************************************************************/





int main ()
{
	
	/* variables to store the 2 numbers*/
	int x ;
	
	/*taking the two numbers from user*/

	printf("x : ");
	scanf("%d",&x);

	
	/*  shifting left is the same as /2 */
	
	printf("result= %d", x >>1);
	
	
	
	
	
	return 0 ; 
	
}