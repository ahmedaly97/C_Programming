
#include<stdio.h>
#include"help.h"
																				
/**************************************************************/         
/**************************************************************/         
/********************  a program to draw **********************/
/***************snake numbers Triangle Pattern*****************/         
/**************************************************************/			
/**************************************************************/							


int main ()
{
		/*variables to store rows , loops couters*/
		int rows , line, ctr=0 ,odd_num=1,even_num;
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=1 ; line<= rows ; line++)
			{
				/* generating the number that will be printed in even rows
				  first generation will not be printed as the first row is row 1 odd*/
				even_num=odd_num+line-1;
				
				
				/*inner for loop to print the number */
				for(ctr=1; ctr <=line ; ctr++)
				{
					/*check for the row :odd or even*/
					if(IsOdd(line)== 1)
					{
						
						printf("%d ", odd_num);
						
					}
					else
					{
						printf("%d ", even_num);
						even_num--;
					}
					
					/*increment oddnum as it is affecting the even num nedded for rows 2,4,6,8,...*/
					odd_num++;
					
			
				}
				
				printf("\n");
				
			}
			
		}
		
		



	return 0;
}

