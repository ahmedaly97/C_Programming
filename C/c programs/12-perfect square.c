#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to check wether          ************/         
/*************  the given number is perfect square or not ************/ 
/*********************************************************************/
/*********************************************************************/
int main()
{
	/*integer variable to store the number*/
	int x, state ;
	
	/*getting the number from the user*/
	printf("enter a number : ");
	scanf("%d",&x);
	
	/*receiving the return value of the called function*/
    state = IsPerfectSquare (x);
	if (state == 1)
	{
		printf("%d is a perfect square",x);
	}
	else
	{
		printf("%d is not a perfect square",x);
	}
	
	
	
	
	
}
	