#include<stdio.h>
#include<stdlib.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to divide                ************/         
/*************         2 numbers  without / sign          ************/ 
/*********************************************************************/
/*********************************************************************/


int tricky_divide ( int x , int y );


int main ()
{
	
	/* variables to store the 2 numbers*/
	int x ,y , res;
	
	/*taking the two numbers from user*/

	printf("x : ");
	scanf("%d",&x);
	
	printf("y : ");
	scanf("%d",&y);
	
	/* division */
	res = tricky_divide(x ,y);
	
	/*printing the result*/
	printf("result= %d", res);
	
	
	
	
	
	return 0 ; 
	
}

int tricky_divide ( int x , int y )
{
	
	int count =0; 
	int result;
	int sign = (x > 0) ^ (y > 0)  ?  -1 : 1 ;
	
	x= abs(x);
	y= abs(y);

	while( x >= y)
	{
		
		x=x-y;
		count++;
	}
	
	result = count * sign ; 
	
	return result;
}