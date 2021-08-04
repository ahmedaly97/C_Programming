#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/*		    						*
                                   ***
                                  *****
                                 ******* /
/**************************************************************/			
/**************************************************************/						


int main ()
{
	
		/*variables to store rows , loops couters*/
		int rows , line , stars , spaces, max_baze=80;
		
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=1 ; line<= rows ; line++)
			{
				/*inner for loop 1 to print the spaces */
				for(spaces=1; spaces <=((max_baze/2)-(line-0)); spaces++)
				{
					/* -we are printing spaces from the left side so we divide the max baze by 2
						-we are subtracting the distance from left of the screen (division result) - current line (that is an incrementing value)
						which means that number of spaces is decremented each iteration
						- line - x ( x is the horizontal control variable --> 0: middle , -30-> almost right, +30->almost left */
						/*print space*/
						printf(" ");
				}
							
				/*inner for loop 2 to print the pattern */
				for(stars=1; stars <=(2*line-1) ; stars++)
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


	
	
	
	
	
	
	return 0;
}