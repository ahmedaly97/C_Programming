#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************** A program to print the sequence        ***************/         
/***************      	of a given number 		      ****************/ 
/*********************************************************************/
/*********************************************************************/



void print_sequence(unsigned int start , unsigned int end);

void find_sequence(int number);

int main()
{
	int x;
	printf("Enter the number : ");
	scanf("%d",&x);
	
	find_sequence(x);
	
	return 0;
}


void print_sequence(unsigned int start , unsigned int end)
{
	int i;
	printf("Start of the sequence >>>> \n");
	
	for(i=start ; i<=end ; i++)
	{
		printf("%d ",i);
	}
	
	printf("\nEnd of the sequence \n\n\n");
}



void find_sequence(int number)
{
	int i , j ,sum;
	
	for(i=1 ; i<=number ; i++)
	{
		sum=0;
		
		for(j=i;j<=number ; j++)
		{
			sum=sum+j;
			
			if(sum == number)
			{
				print_sequence(i,j);
				break;
			}
			if(sum> number)
			{
				break;
			}
		}
		
		
	}
	
	
	
}





















