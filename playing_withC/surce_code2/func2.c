#include <stdio.h>

int cal(int e, int b)
{
	int ans;

	if (e > b)
		ans = e;
	else ans = b;

	return ans;
}

int main()
{
	int res;

	res = cal(1, 5);

	printf("%i\n", res);
}
