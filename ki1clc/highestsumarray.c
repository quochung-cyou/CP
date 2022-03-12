#include <stdio.h>

long long max(long long a, long long b)
{
	if (a >= b)
		return a;
	else
		return b;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t > 0)
	{
		int n;
		scanf("%d", &n);
		long long a[n + 5];
		for (int i = 0; i < n; i++)
		{
			scanf("%lld", &a[i]);
		}
		long long sum = a[0];
		long long dem = a[0];

		for (int i = 1; i < n; i++)
		{
			dem = max(a[i], dem + a[i]); //1 3 5 7 10 11 12 13
			sum = max(sum, dem);
		}
		printf("%lld\n", sum);
		t--;
	}
	return 0;
}