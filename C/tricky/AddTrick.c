#include<stdio.h>
#include<stdlib.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to add two               ************/         
/*************      numbers without plus sign             ************/ 
/*********************************************************************/
/*********************************************************************/





int main ()
{
	
	/* variables to store the 2 numbers*/
	int x , y , sum ;
	
	/*taking the two numbers from user*/
	printf("enter the two numbers\n");
	printf("x : ");
	scanf("%d",&x);
	printf("y:  ");
	scanf("%d",&y);
	
	/*method 1 to get sum without + */
	printf("method 1 : the sum of x , y = %d\n", x-(-y));

	printf("method 2 : the sum of x , y = %d\n", -(-x-y));

	printf("method 3 : the sum of x , y = %d\n", abs(-x-y));

		
	sum  =	tricky_add( x, y );
	
	printf("method 4 : the sum of x , y = %d\n", sum);
	
	return 0 ; 
}
