#include<stdio.h>
#include"help.h"

/*********************************************************************/
/*********************************************************************/
/************        Bit Math Program to apply 	   		  ************/         
/************    	 set , get , clear , toggle  		  ************/ 
/*********************************************************************/
/*********************************************************************/
int main ()
{
	/*variables to store the number , bit number , result*/
	int num ,bit_num , result ,selector ;
	
	
	/*select */
	printf("welcome to bit math\n==================\n1: Set bit\n2: Clr bit\n3: Get bit\n4: Toggle bit\n");
	scanf("%d",&selector);
	
	
	/*getting  the number from the user*/
	printf("enter a number : ");
	scanf("%d",&num);
	
	/*getting the certain bit number */
	printf("enter the bit number : ");
	scanf("%d",&bit_num);
	
	
	/*checking on the input selector*/
	switch(selector)
	{
		case 1 :printf("\nset bit\n==========\n");
				result=set_bit(num,bit_num);
				printf("the number after setting bit %d = %d\n",bit_num,result);
				break;
				
		case 2 :printf("\nclear bit\n==========\n");
				result=clr_bit(num,bit_num);
				printf("the number after clearing bit %d = %d\n",bit_num,result);
				break;
				
		case 3 :printf("\nget bit\n============\n");
				result=get_bit(num,bit_num);
				printf("the value of bit %d is : %d\n",bit_num,result);
				break;
				
		case 4 :printf("\ntoggle bit\n=========\n");
				result=toggle_bit(num,bit_num);
				printf("the number after toggeling bit %d = %d\n",bit_num,result);
				break;
				
				
		
	}
	
}