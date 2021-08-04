#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/*							*        *
							**      **
							***    ***
							****  **** 
							**********				/
/**************************************************************/			
/**************************************************************/	
int main ()
{
	
	/*variables to store rows , loops couters*/
		int rows , line , col ;
		
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=1 ; line<= rows ; line++)
			{
			
							
				/*inner for loop  to print the  pattern */
				for(col=1; col <=(2*rows) ; col++)
				{		
						
						
						/*check by comparing col to line */
						/*print * before the gap || print * after the gap */
						if((col <= line) || (col > (2*rows-line)))
						{
							printf("*");
						}
						/*in case of the col number is > row number the gap */
						else
						{
							printf(" ");
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