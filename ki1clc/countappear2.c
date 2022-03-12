#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int check = 1; check <= n; check++) 
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
		printf("Test %d:\n", check);
		for (int i = 0; i < soluong; i++)
		{
			if (b[a[i]] > 0)
			{
				if (b[a[i]] == 1)
					printf("%d appears %d times\n", a[i], b[a[i]]);
				else
					printf("%d appears %d times\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
}