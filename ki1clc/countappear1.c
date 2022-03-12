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
		
	}

	for (int i = 0; i < soluong; i++)
	{
		if (b[a[i]] > 0) {
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]] = 0;
		}
		
	}
}