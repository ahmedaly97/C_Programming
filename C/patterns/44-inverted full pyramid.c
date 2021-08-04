#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/*		    					 * * * * *
								  * * * *
								   * * *
									* *
									 *    /
/**************************************************************/			
/**************************************************************/	
int main ()
{

		/*variables to store rows , loops couters*/
		int rows , line , stars , spaces;
		
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=rows ; line>= 1 ; line--)
			{
				/*inner for loop 1 to print the spaces */
				for(spaces=rows-line; spaces >=1 ; spaces--)
				{
						/*print space*/
						printf(" ");
				}
							
				/*inner for loop 2 to print the pattern */
				for(stars=(2*line-1); stars >=1 ; stars--)
				{		
						 /*number of stars in each line = (2* current line)-1*/
						/*print star then a space*/
						printf("*");
				}
				
				printf("\n");
				
			}
			
		}
		else
		{
			printf("number of rows should be positive");
		}




	return 0 ;
}