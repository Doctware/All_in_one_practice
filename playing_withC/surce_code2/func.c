#include <stdio.h>

/**
 * min - palying with function
 * Return: min
 */

int min(int num1, int num2)
{
	int ans;

	if (num1 < num2)
		ans = num1;
	else
		ans = num2;
	return ans;
}

/**
 * printstar - print star in good shape
 *
 * Return: 0 as success
 */

int printstar(int a)
{
	int numtocot;


	for (numtocot = 1; numtocot <= 10; numtocot++)
	{
		for (a = 1; a <= numtocot; a++)
			printf("* \n");
	}

	return (0);
}

/**
 * main - check the min function
 *
 * Return: 0assuccess
 */

int main()
{
	int a = 800;
	int b = 9000;
	int ls;

	ls =  min(a, b);
	printf("the min is %d\n", ls);

	printstar(a);
	
	return (0);
}
