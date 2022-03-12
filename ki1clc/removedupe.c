#include <stdio.h>
//7 1 5 10 10 5 2 3
int main()
{

	int soluong, max = -1e7, maxint = 1e7, count = 0;
	scanf("%d", &soluong);
	int a[soluong];
	int dem = 0;
	int b[200001] = {};
	for (int i = 0; i < soluong; i++)
	{
		int x;
		scanf("%d", &x);

		if (b[x] == 0)
		{
			b[x]++;
			a[dem] = x;
			dem++;
		}
	}

	for (int i = 0; i < dem; i++)
	{

		printf("%d ", a[i]);
	}
}