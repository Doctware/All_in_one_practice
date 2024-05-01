#include <stdio.h>

void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}

void sub(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}

void mul(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

int main()
{
	void (*function_ptr_ar[]) (int, int) = {add, sub, mul};
	unsigned int ch, a = 15, b = 10;

	printf("Enter choice: 0 for add, 1 for sub, 2 for mul:\n ");
	scanf("%d", &ch);

	if (ch > 2)
		return 0;

	function_ptr_ar[ch](a, b);
	return 0;
}
