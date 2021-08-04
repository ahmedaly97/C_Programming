#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to check wether          ************/         
/*************         the number is odd or even  		**************/ 
/*********************************************************************/
/*********************************************************************/



int main ()
{
	/*integer variable to store the input*/
	int num ; 
	printf("check wether it is even or odd ");
	printf("\nenter the number : ");
	scanf("%d",&num);
	
	/*getting the reminder and check on it */
	if (num %2 == 0)
	{
		/*the reminder of 2 is zero when the number is even*/
		printf("it is an even\n");
	}
	else 
	{
		/*the reminder of 2 is  NON-zero when the number is odd*/
		printf("it is an odd\n");
	}
	

	return 0;
}