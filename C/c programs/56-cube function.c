#include <stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to print the cube        ************/         
/*************         of any number using functions	  ************/ 
/*********************************************************************/
/*********************************************************************/

int main ()
{
		
	/* variables to store the number*/
	int x , result;
	
	/*taking the number from user*/

	printf("Enter x : ");
	scanf("%d",&x);
	
	result = cube(x);
	
	printf("the cube of %d is %d",x,result);
	
	
	return 0;
}