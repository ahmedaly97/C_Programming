<<<<<<< HEAD
#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************    a program to draw letters 		      ****************/
/************		square pattern	                  ****************/ 
/*********************************************************************/
/*********************************************************************/							


int main ()
{
		/*variables to store rows , loops couters*/
		char rows , line, ctr;

	
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
	
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			/*nested loop to go to a new line*/
			for (line ; line < rows ; line ++ )
			{
				for(ctr=1; ctr<=rows ; ctr++)
				{
				/*print the letter of each inner loop iteration*/
				printf("%1c",line+65);
			
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
