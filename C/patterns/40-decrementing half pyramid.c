
#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/*		    *
		   **
		  ***
		 ****
		***** /
/**************************************************************/			
/**************************************************************/							


int main ()
{

		/*variables to store rows , loops couters*/
		int rows , line , stars ;
		
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=rows ; line>= 1 ; line--)
			{
			
							
				/*inner for loop  to print the pattern */
				for(stars=line; stars >=1 ; stars--)
				{
						/*print star*/
						printf("* ");
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
