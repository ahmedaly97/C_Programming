
#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/*		*
		$ *
		* $ *
		$ * $ *
		* $ * $ * /
/**************************************************************/			
/**************************************************************/							


int main ()
{
		
		/*variables to store rows , loops couters*/
		int rows , line , ctr;
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=1 ; line<= rows ; line++)
			{
				/*inner for loop to print the pattern */
				for(ctr=1; ctr <=line ; ctr++)
				{
					
					if (   IsOdd(line + ctr) )
					{
						/*the $ should be printed only if the sum of(line +col)is an odd number*/
						printf("$ ");
					}
					else
					{
						/*the * should be printed only if the sum of(line +col)is an even number*/
						printf("* ");
						
					}
					
					
				}
				
				printf("\n");
				
			}
			
		}
		else
		{
			printf("number of rows should be positive");
		}
		

return 0;
}
