/*
Name : K.Y.Naga Sai Vinay
Date : 07-03-2024
Description : WAP to sort an array using pointers
Sample input : n = 5, arr[] = {0, 23, 14, 12, 9}
Sample output : {0, 9, 12, 14, 23}
*/
#include <stdio.h> 
void sorting();

void sorting(int n, int* ptr) 
{ 
    int i, j, t; 
    for (i = 0; i < n; i++)
    { 	
	for (j = i + 1; j < n; j++)
       	{ 
	    if (*(ptr + j) < *(ptr + i)) 
	    { 
		t = *(ptr + i); 
		*(ptr + i) = *(ptr + j); 
		*(ptr + j) = t; 
	    } 
	} 
    }  
    for (i = 0; i < n; i++) 
	printf("%d ", *(ptr + i)); 
} 
 
int main() 
{ 
    int n = 5; 
    int arr[] = { 0, 23, 14, 12, 9 }; 
    sorting(n, arr);     
    return 0; 
} 


