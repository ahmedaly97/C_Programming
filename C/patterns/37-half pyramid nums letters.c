
#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/*		A
		1 1
		B B B
		2 2 2 2
		C C C C C /
/**************************************************************/			
/**************************************************************/							


int main ()
{

		/*variables to store rows , loops couters*/
		int rows , line , ctr , nums=1;
		char ch = 'A';
		
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

					/*check for the line */
					if (IsOdd(line))
					{
						/*characters are printed at odd rows*/
						printf("%c ",ch);
					}
					else
					{
						/*numbers are printed at even rows*/
						printf("%d ",nums);
						
					}
					
					
				}
				
				/*check for the line */
				if (IsOdd(line))
				{
						/*if the printed was char increment ch*/
						ch++;
				}
				else
				{
						/*if the printed was number increment nums*/
						nums++;
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