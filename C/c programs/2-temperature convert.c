#include <stdio.h>

/*********************************************************************/
/*********************************************************************/
/************** A program to convert the input celsuis ***************/         
/***************      degree to fahrenheit desgree    ****************/ 
/*********************************************************************/
/*********************************************************************/
										
int main ()
{

	/* float variables to store degrees */ 
	float celsuis , fahrenheit;
	
	/* taking the two values*/
	printf("enter the celsuis degrees : ");
	scanf("%f",&celsuis);
	
	/* converting */
	fahrenheit = celsuis * (1.8) +32 ; 
	
	/* printing the equivalent*/
	printf("the equivalent fahrenheit degrees = %f\n", fahrenheit);
	
	
	return 0;
}