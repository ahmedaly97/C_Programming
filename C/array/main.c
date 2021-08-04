#include<stdio.h>
#include<string.h>
#include"array.h"
#include"help.h"

#define len 20
/*********************************************************************/
/*********************************************************************/
/************          A program to deal with various     ************/         
/*************         	    Array operations     		  ************/ 
/*********************************************************************/
/*********************************************************************/

int main()
{
	int arr1[len] , arr2[len] ,res_arr[len], size, size2 , i , average , first_occ,last_occ, select , recieve , element ,pos , *ptr , del , greatest, smallest ,val,p1 ,p2;
	char str[len] ,str2[len], lett ,string[5][30], temp[30];
	

	
	printf("______________________________________________________________________________________________________\n");
	printf("1-Average of array\n4-swap two arrays\n5-check string letters\n6-convert to uppercae\n7-reverse array\n8-letter frequency\n\
9-remove non alphabet\n10-get string length\n11-reverse string\n13-number of elements\n14-Insert new element\n15-delete element\n16-dictionary order\n\
17-found at\n18-find largest&smallest\n19-selection sorting\n20-Bubble sort\n21-Insertion sort\n22-Merge Sort\n23-Merge sorted parts\n24-Linear search\n\
25-Binary search\n26-Find Missing Element\n27-Find the duplicate number\n");
	printf("______________________________________________________________________________________________________\n");
	printf("\nEnter the selector : ");
	scanf("%d",&select);
	
	switch(select)
	{
		case 1: 
				printf("\nyou choosed average of an array\n");
			    /*taking the size of the array */
				printf("Enter the size of the array1 : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				average= average_arr(arr1, size);
				printf("the result :%d",average);
				break;
		

		case 4: 
				printf("\nyou choosed swap of to arrays\n");
			    /*taking the size of the array */
				printf("Enter the size of the arrays : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}				
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array2 element %d : ", i+1);
					scanf("%d",&arr2[i]);
				}
				swap_array(arr1 , arr2 ,size );
				printf("array 1\n");
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr1[i]);
					
				}
				
				
				printf("\narray 2\n");
				
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr2[i]);
					
				}
				break;

		
		case 5 :
				printf("you choosed check repeated letters in a string");
				printf("\nenter a string \"max 19 character\" :\n");
				scanf("%19s",str);
				size=strlen(str);
				recieve = check_string_letters(str, size);
				if (recieve == 1)
				{
					printf("\nfalse");
				}
				else
				{
					printf("\ntrue");
				}
				
				break;
				
				
				
		case 6 :
				printf("you choosed convert lowercase to uppercase letters in a string");
				printf("\nenter a string \"max 19 character\" :\n");
				scanf("%19s",str);
				size=strlen(str);
				lowercase_to_uppercase(str,size);
				printf("%s",str);	
				break;
				
				
				
		case 7 :
				printf("\nyou choosed reverse an array\n");
			    /*taking the size of the array */
				printf("Enter the size of the array : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				reverse_array(arr1, size);
		        printf("array after swapping\n");
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr1[i]);
					
				}
				break;
				
		case 8 :
				printf("you choosed frequency of a letters in a string");
				printf("\nenter a string \"max 19 character\" :\n");
				scanf("%19s",str);
				size=strlen(str);
				printf("enter a letter to search for : ");
				scanf(" %c", &lett);
				recieve = letter_frequency(str,size,lett);
				printf("%d",recieve);	
				break;	

		case 9 :
				printf("you choosed remove non alphabetic from a string");
				printf("\nenter a string \"max 19 character\" :\n");
				scanf("%19s",str);			
				Remove_Non_Alphabet(str);	
				puts(str);
				break;

		case 10 :
				printf("you choosed get string length");
				printf("\nenter a string \"max 19 character\" :\n");
				scanf("%19s",str);			
				recieve= get_string_length(str);	
				printf("%d",recieve);
				break;				
				
		case 11 :
				printf("you choosed reverse a string");
				printf("\nenter a string \"max 19 character\" :\n");
				scanf("%19s",str);
				size=strlen(str);
			    reverse_string(str, size);
				printf("%s",str);	
				break;	

		case 12 :
				printf("you choosed concatenate two strings");
				printf("\nenter a string1 \"max 19 character\" :\n");
				scanf("%19s",str);
				size=strlen(str);
				printf("\nenter a string2 \"max 19 character\" :\n");
				scanf("%19s",str2);
				size2=strlen(str2);
			    concat_string(str, size,str2,size2);
				printf("concatination : %s",str);	
				break;

		/* works on initialized array int arr[]={1,2,3}
		  can't be used with a size (macro definition)
			case 13 :
				printf("you choosed get number of elements in an array ");
				printf("\nEnter the size of the array1 : ");
				scanf("%d",&size);
				/*scanning array elements from the user
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				printf("%d-%d", sizeof(arr1), sizeof(arr1[0]))	;			
				recieve = sizeof(arr1)/sizeof(arr1[0]);
				printf("\n%d",recieve);
				break;*/
				
		case 14 : 
				printf("you choosed insert element in an array ");
				printf("\nEnter the size of the array1 : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				printf("enter the value u need to insert : ");
				scanf("%d",&element);
				printf("enter the position at which u need to insert : ");
				scanf("%d",&pos);
			   
			   //insert_element (arr1,size,element , pos );
				ptr=insert_element2 ( arr1 , size, element , pos);

				for(i=0 ; i <= size ; i ++ )
				{
					printf("%d\t", *(ptr+i));
					
				}
		
		case 15 : 
				 printf("you choosed delete element ");
				 printf("\nEnter the size of the array1 : ");
				 scanf("%d",&size);
				 /*scanning array elements from the user*/
				 for(i=0 ; i < size ; i ++ )
				 {
				 	printf("Enter array1 element %d : ", i+1);
				 	scanf("%d",&arr1[i]);
				 	
				 }
				 printf("enter the position at which u need to delete : ");
				 scanf("%d",&del);
				 delete_element (  arr1 ,  size ,  del);
				 for(i=0 ; i < size-1 ; i ++ )
				 {
				 	printf("%d\t", arr1[i]);
				 	
				 }
				 break;
				
		case 16	:
				 printf("you choosed dictionary order\n");
				 printf("Enter 5 words: ");
				 for(i=0 ; i < 5 ; i ++ )
				 {
				 	printf("Enter string %d : ", i+1);
				 	scanf("%s",string[i]);
				 	
				 }
				 string_dictionary_order(string ,temp);
				 printf("after dictionary order :\n");
				 for(i=0 ; i < 5 ; i ++ )
				 {
				 	printf("%s\n", string[i]);
				 	
				 }
				 break;
				 
				 
		case 17	:
				 printf("you choosed found at\n");
				 printf("\nEnter the size of the array1 : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				printf("enter the value u need to find its indces : ");
				scanf("%d",&element);
				ptr= found_at (arr1 ,size , element ,&recieve);
				
				printf("this value is found %d times \n",recieve);
				
				for(i=0 ; i < recieve ; i ++ )
				{
					printf("%d\t", *(ptr+i));
					
				}
				break;				 
				 
		case 18	:
				 printf("you choosed get the greatest & the smallest\n");
				 printf("\nEnter the size of the array1 : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
			    greatest_smallest_element(arr1 ,&greatest, &smallest,size);

				
				printf("the largest element is %d and the smallest is %d \n",greatest,smallest);
				break;


		case 19	:
				 printf("you choosed selection sorting\n");
				 printf("\nEnter the size of the array : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}				
				selection_sort (arr1 ,size);
				 printf("The array after selection sorting : \n ");
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr1[i]);
				
					
				}		
				 
				break;

		case 20	:
				 printf("you choosed Bubble sorting\n");
				 printf("\nEnter the size of the array : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}				
			    bubble_sort(arr1 ,size);
				 printf("The array after selection sorting : \n ");
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr1[i]);
				}		
				 break;				 
				 
		case 21	:
			    printf("you choosed Insertion sorting\n");
				printf("\nEnter the size of the array : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}				
			    insertion_sort(arr1 ,size);
				 printf("The array after Insertion sorting : \n ");
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr1[i]);
				}		
				 break;	
				 
		case 22:
				printf("\nyou choosed Merge Sort\n");
				printf("******The elements must be sorted******");
			    /*taking the size of the array1 */
				printf("\nEnter the size of array1 : ");
				scanf("%d",&size);
				
				/*scanning array elements from the user*/
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				
				 /*taking the size of the array */
				printf("\nEnter the size of array2 : ");
				scanf("%d",&size2);	
				
				/*scanning array elements from the user*/
				for(i=0 ; i < size2 ; i ++ )
				{
					printf("Enter array2 element %d : ", i+1);
					scanf("%d",&arr2[i]);
				}
				/*calling the merge function*/
				merge_sort(arr1 , arr2 ,res_arr ,size ,size2);
				printf("\nThe result array after merging: \n");
				for(i=0 ; i < size+size2 ; i ++ )
				{
					printf("%d\t", res_arr[i]);
				}		
				break;

		/*case 23:
				printf("\nyou choosed Merge Sorted parts\n");
				printf("******The array elements must be sorted******");
			    taking the size of the array1
				printf("\nEnter the size of array1 : ");
				scanf("%d",&size);
				
				scanning array elements from the user
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				calling the merge function
				merge_sorted_parts(arr1 ,res_arr ,2 ,6 ,5,10);
				
				printf("\nThe result array after merging: \n");
				for(i=0 ; i < 10-2 ; i ++ )
				{
					printf("%d\t", res_arr[i]);
				}		
				break;*/

		case 24	:
				printf("you choosed Linear search \n");
				
				printf("\nEnter the size of the array : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				printf("Enter a value to search for \n");
				scanf("%d",&val);				
			    bubble_sort(arr1 ,size);
				printf("The array after  sorting : \n ");
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr1[i]);
				}
                recieve= linear_search(arr1 ,size , val );	
				if( recieve != 0 )
				{
					printf("\nfound at %d", recieve);
				}
				else
				{
					printf("\nnot found");
				}
				break;					
				 

		case 25	:
				printf("you choosed Binary search \n");
				
				printf("\nEnter the size of the array : ");
				scanf("%d",&size);
				/*scanning array elements from the user*/
				
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				printf("Enter a value to search for \n");
				scanf("%d",&val);				
			    bubble_sort(arr1 ,size);
				printf("The array after  sorting : \n ");
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr1[i]);
				}
                recieve= binary_search(arr1 ,size , val );	
				break;
				
		case 26	:
				printf("you choosed find the missing element \n");
				printf("\nEnter the size of the array : ");
				scanf("%d",&size);
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				printf("The array   is : \n ");
				for(i=0 ; i < size ; i ++ )
				{
					printf("%d\t", arr1[i]);
				}	
				recieve=missing_element (arr1 , size);
				printf("\nthe missing element is : %d",recieve);
				break;

		case 27	:
				printf("you choosed find the duplicate number \n");
				printf("\nEnter the size of the array : ");
				scanf("%d",&size);
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				printf("The duplicate elements are : \n ");	
				duplicate_element (arr1 , size);
				break;

		case 28	:
				printf("you choosed find 1st and last occurance \n");
				printf("\nEnter the size of the array : ");
				scanf("%d",&size);
				for(i=0 ; i < size ; i ++ )
				{
					printf("Enter array1 element %d : ", i+1);
					scanf("%d",&arr1[i]);
					
				}
				printf("enter the value : ");
				scanf("%d",&val);
				first_last_occurance(arr1 , size , val , &p1 , &p2);
				printf("first occurance : %d\nlast occurance : %d",p1,p2);
				
				break;
			




				
	}

	return 0; 
}