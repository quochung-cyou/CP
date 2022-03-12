#include <stdio.h>

int main()
{

	int soluong, max = -1e7, maxint = 1e7, count = 0;
	scanf("%d", &soluong);
	int a[soluong];
	int b[200001] = {};
	for (int i = 0; i < soluong; i++)
	{
		int x;
		scanf("%d", &x);
		a[i] = x;
		b[x]++;
		if (b[x] == 1)
			count++;
		else if (b[x] > 1)
			count--;
	}

	printf("%d\n", count);
	for (int i = 1; i < 200001; i++)
	{
		if (b[i] == 1)
		{
			printf("%d ", i);
		}
	}
}