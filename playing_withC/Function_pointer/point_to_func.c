#include <stdio.h>
int add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return a - b;
}
 
int main()
{
	int sum;

	int (*p) (int, int);
	p = add;
	sum = (*p) (1, 5);
	printf("%d\n", sum);

	printf("%d\n", sub(10, 90));

	return 0;
}
