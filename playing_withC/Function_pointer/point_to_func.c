#include <stdio.h>
int add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return a - b;
}

int caller(int (*p) (int, int), int a, int b)
{
	return p(a, b);
}
 
int main()
{
	int sum;

	sum = caller(add, 10, 20);
	printf("%d\n", sum);

	printf("%d\n", sub(10, 90));

	return 0;
}
