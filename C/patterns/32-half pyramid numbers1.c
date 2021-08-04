

#include<stdio.h>
#include"help.h"
																				
/***********************************************************1**********/         
/***********************************************************21**********/         
/************  a program to draw half pyramid(numbers)******321**********/         
/***********************************************************4321**********/			
/***********************************************************5432**********/							


int main ()
{
	
		/*variables to store rows , loops couters*/
		int rows , line, ctr=0;
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=1 ; line<= rows ; line++)
			{
				/*inner for loop to print the pattern by the number of current line
				 decreminting till reaching to 1*/
				for(ctr=line; ctr >=1 ; ctr--)
				{
					printf("%d ", ctr);
					
				}
				
				printf("\n");
				
			}
			
		}
		
	
	
	
	

	


	return 0;
}
