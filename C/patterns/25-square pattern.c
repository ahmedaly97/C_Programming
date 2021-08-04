
#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************    a program to draw square pattern	  ****************/         
/*********************************************************************/ 
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
		 /*nested loop to print and go to a new line*/
		for (line=0 ; line < rows ; line ++ )
		{
			for(stars=0; stars<rows ; stars++)
			{
				/*print the pattern at each inner for loopr iteration*/
				printf(" * ");
			
			}
		
				/*new line to draw in a new row*/
				printf("\n");
		
		}
		
	 }
	 else
	 {
		printf("number of rows must be postive\n"); 
		 
	 }
	
	return 0;
}
