#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/*		    					     1
									121
								   12321
								  1234321
								 123454321/
/**************************************************************/			
/**************************************************************/	
int main ()
{
	
	/*variables to store rows , loops couters*/
		int rows , line , col , spaces , a=1;
		
		
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
				for(spaces=1; spaces <=rows-line; spaces++)
				{
						/*print space*/
						printf(" ");
				}
							
				/*inner for loop 2 to print the numbers pattern */
				for(col=1; col <=(2*line-1) ; col++)
				{		
						/*check by comparing col to line */
						
						/*in case of the col number < row number */
						if(col < line)
						{
							/*print a that starts with 1 and increment it*/
							printf("%d",a);
							a++;
						}
						/*in case of the col number is the same as row number (middle column) */
						else if(col == line)
						{
							/*print the row nuber as the middle number of each row is the row number */
							printf("%d",line);
						}
						/*in case of the col number is > row number*/
						else
						{
							/*decrement a */
							a--;
							/*print a that holds the value of the first smallest number before the middle number*/
							printf("%d",a);
							
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