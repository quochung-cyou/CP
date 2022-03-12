#include <stdio.h>

//5 6 1 2 3 4 5 3 4 5 6 7 8
// 5 6 1 2 3 4 5 5 6 7 8 9 9
//4 4 5 6 7 8 9 8 7 6
int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);

	int a[100000];
	int b[100000];
	int c[100000] = {0};
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int j = 0; j < m; j++)
		scanf("%d", &b[j]);
	for (int i = 0; i < n; i++)
		c[a[i]] = 1;

	for (int i = 0; i < m - 1; i++)

		for (int j = 0; j < m - i - 1; j++)
		{
			
			if (b[j] > b[j + 1])
			{
				int tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp;
			}
		}
	for (int j = 0; j < m; j++)
	{
		if (c[b[j]] == 1)
		{
			printf("%d ", b[j]);
			c[b[j]]++;
		}
	}
	return 0;
}