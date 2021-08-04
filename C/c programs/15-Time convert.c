#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to  convert              ************/         
/************* specified days into years, weeks and days. ************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	
	/*integer variable to store the number*/
	int days , months,years,weeks  ;
	
	/*getting the numberof days from the user*/
	printf("enter a number : ");
	scanf("%d",&days);
	
	/*getting number of years*/
	years= (days/365);
	
	/*getting number of months */
	months= (days /365)*12;
	
	/*getting number of weeks */
	weeks= ((days /365)*12)*4;
	
	
	
	/*printing the results*/
	printf("weeks=%d",weeks);
	printf("\nmonths=%d",months);
	printf("\nyears=%d",years);
	
	
	
	return 0;
}