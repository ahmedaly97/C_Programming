
#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************    a program to draw letters 		      ****************/
/************    in a frame of * pattern	          ****************/ 
/*********************************************************************/
/*********************************************************************/							


int main ()
{
		/*variables to store rows , loops couters*/
		int rows , line, col;
		
		/*variable to store letters*/
		char ch='A' ;

	
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
	
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			/*outer loop to go to a new line*/
			for (line=0 ; line < rows ; line ++ )
			{
				/*inner loop to print in each line */
				for(col=0; col<rows ; col++)
				{
					
					/*conditions in which the  * should be printed*/
					if ( (col == 0) ||(col== (rows-1)) ||(line == 0 ) || (line== (rows-1) ) )
					{
						/*print the letter of each inner loop iteration*/
						printf("* ");
						
					}
					else
					{
						/*print letters inside*/
						printf("%c ",ch);
						
						/*increent letters*/
						ch++;
						
						/*if we reaced the end of letters */
						if(ch >'Z')
						{
							/*start from beginning again*/
							ch='A';
						}
						
					}
	
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
