#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to check                 ************/         
/*************  wether the number is positive or not      ************/ 
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
    state = IsPostive (x);
	
	/*checking on the received value*/
	if (state ==0)
	{
		printf("zero");
	}
	else if (state ==1)
	{
		printf("postive");
	}
	else if (state ==0)
	{
		printf("negative");
	}
	
	return 0;
}