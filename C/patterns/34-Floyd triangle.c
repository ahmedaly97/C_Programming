
#include<stdio.h>
#include"help.h"
																				
/***********************************************************1**********/         
/***********************************************************23**********/         
/************  a program to drawFloyd’s Triangle Pattern******456**********/         
/***********************************************************78910**********/			
/***********************************************************1112131415**********/							


int main ()
{
	
		/*variables to store rows , loops couters*/
		int rows , line, ctr=0 ,num=1;
		
		/*taking the number of rows from the user*/
		printf("enter the number of rows : ");
		scanf("%d",&rows);
		
		
		/*check for the given number of rows*/
		if (IsPostive (rows) >0)
		{
			
			/*outer for loop to go to a new line*/
			for(line=1 ; line<= rows ; line++)
			{
				/*inner for loop to print the pattern*/
				
				for(ctr=1; ctr <=line ; ctr++)
				{
					printf("%d ", num);
					num++;
			
				}
				
				printf("\n");
				
			}
			
		}
		
	
	
	
	

	


	return 0;
}
