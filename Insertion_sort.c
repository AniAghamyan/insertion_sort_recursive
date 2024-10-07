#include <stdio.h> 

void insertion_sort_recursive(int arr[], int n) 
{ 
	if (n <= 1) 
		return; 
	insertion_sort_recursive(arr, n - 1); 
	int last = arr[n - 1]; 
	int j = n - 2; 
	while (j >= 0 && arr[j] > last) { 
		arr[j + 1] = arr[j]; 
		j--; 
	} 
	arr[j + 1] = last; 
} 

void print_array(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
	int arr[] = { 16, -5, 8, 0, 47 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	insertion_sort_recursive(arr, n); 
	print_array(arr, n); 

	return 0; 
} 

