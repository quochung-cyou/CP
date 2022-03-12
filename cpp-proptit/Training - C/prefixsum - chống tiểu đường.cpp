#include <stdio.h>


//9 2 2 3 4 4 6 6 7 8 19
int main()
{
	long long n, m;
	long long sum = 0;
	scanf("%lld %lld", &n, &m);
	long long a[n+5];
	long long b[n+5];
	for (long long i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
		sum += a[i];
		if (i < m) b[i] = sum;
		else b[i] = sum + b[i-m];
		
	}

	for (long long i = 0; i < n; i++) printf("%lld ", b[i]);


}