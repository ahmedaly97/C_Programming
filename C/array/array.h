#ifndef ARRAY_H__
#define ARRAY_H__


int average_arr (int * arr , int size);

int first_occurance_arr(int * arr , int size);

int last_occurance_arr(int * arr , int size);

void swap_array(int * arr1 , int * arr2 , int size );

int check_string_letters( char str[], int size);

void lowercase_to_uppercase(char *str, int size);

void reverse_array(int * arr , int size); 

int letter_frequency(char *str,int size, char lett);

void Remove_Non_Alphabet(char *str);

int get_string_length(char*str);

void reverse_string(char * str , int size); 

void concat_string(char *str, int size, char*str2,int size2);

void insert_element ( int * arr , int size,int element , int pos );

int* insert_element2 ( int*arr ,int size,int element ,int pos);

void delete_element ( int *arr , int size , int del);

void string_dictionary_order( char str[5][30] , char temp[30] );

int* found_at (int *arr1 , int size , int element , int* rp);

void greatest_smallest_element( int*arr ,int *rp1 , int*rp2 , int size);

void selection_sort (int *arr , int size);

void bubble_sort (int *arr , int size);

void insertion_sort(int *arr , int size);

int binary_search(int *arr , int size , int val );

int linear_search(int *arr , int size , int val );

void merge_sort(int*arr1 , int*arr2 ,int *res_arr ,int size1 , int size2);

void merge_sorted_parts(int*arr , int *res_arr ,int low1 , int low2 , int up1 , int up2);

int missing_element ( int * arr , int size);

void duplicate_element (int *arr ,int size );

void first_last_occurance(int* arr , int size , int val , int* ptr1 , int* ptr2);

#endif
