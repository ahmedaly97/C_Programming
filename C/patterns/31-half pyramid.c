#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************    a program to draw half pyramid *     ****************/
/*********************************************************************/
/*********************************************************************/							


int main ()
{
		/*variables to store rows , loops couters*/
		int rows , line, stars;
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=1 ; line<= rows ; line++)
			{
				/*inner for loop to print the pateern by the number of current line*/
				for(stars=1; stars <=line ; stars++)
				{
					printf("*");
					
				}
				
				printf("\n");
				
			}
			
		}
	
	return 0;	
}