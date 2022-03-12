#include <stdio.h>
//7 1 5 10 10 5 2 3
//6 16 17 4 3 5 2
//chua lam test
int main()
{
	int t;
	scanf("%d", &t);
	while (t > 0)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++)
		{
			int x = a[i], kq = 0;
			for (int j = i+1; j < n; j++)
			{
				if (a[j] >= x)
				{
					kq = 1;
					break;
				}
			}
			if (kq == 0) printf("%d ", x);
		}
		printf("\n");
		t--;
	}
}