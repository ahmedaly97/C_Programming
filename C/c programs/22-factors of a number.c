#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************        program to print the factors 		  ************/         
/************    	       of a given number			  ************/ 
/*********************************************************************/
/*********************************************************************/

int main ()
{
	/*variable to store the given number*/
	int num,i;
	
	/*taking the number from the user*/
	printf("\nEnter a number : ");
	scanf("%d",&num);
	
	
	/*printing the factors of the number*/
	printf("The factors of number %d are : ",num);
	
	/*loop to check throuh it the factors of the number */
	for(i=1 ; i <= num ; i++)
	{
			/*check for each iteration*/
			if( num % i == 0)
			{
				/*as the reminder is zero , so its a factor*/
				printf("%d-",i);			
			}
	}
	return 0 ;
}