#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************          A program to print the             ************/         
/*************      largest of 3 input numbers            ************/ 
/*********************************************************************/
/*********************************************************************/

int main ()
{
	/* 3 variables to store the numbers , 1 variable to store the value of the largest*/
	int x,y,z , max;
	
	/*getting the 3 variables from the user*/
	printf("enter x: ");
	scanf("%d",&x);
	printf("enter y: ");
	scanf("%d",&y);
	printf("enter z: ");
	scanf("%d",&z);
	
	
	/*getting the max using ternery operator return*/
	/*  checking x,y    checking x,z      checking y,z */
	max=  (x>y) ? (x>z) ?x :z  : (y>z) ? y :z;
	
	/*printing the largest*/
	printf("the largest = %d",max);

return 0;
}