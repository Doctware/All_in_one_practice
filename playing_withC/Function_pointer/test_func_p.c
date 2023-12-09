#include <stdio.h>
#include <stdbool.h>

// A compare function thtat is used for searching integer
// array
bool compare (const void * a, const void * b)
{
	return ( *(int*)a == *(int*)b );
}

// General purpose search() function that can be used
// for searching element *x in an array arr[] of
// arr_size. Note that void pointer are used so that
// the function can be called by passing a pointer of 
// any type. ele_size is size of an array element

int search(void *arr, int arr_size, int ele_size, void *x, bool compare (const void *, const void *))
{
	// since char takes one byte, we can use char pointer
	// for any type to get pointer arithmetic correct
	// we need to multiply index with size of an array
	// element ele_size

	char *ptr = (char *)arr;

	int i;
	for (i = 0; i < arr_size; i++)
		if (compare(ptr + i * ele_size, x))
			return i;

	// if elem not found 
	return -1;
}

int main()
{
	int arr[] = {2, 5, 7, 90, 70};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 90;
	printf("Return index is %d\n", search(arr, n, sizeof(int), &x, compare));

	return 0;
}
