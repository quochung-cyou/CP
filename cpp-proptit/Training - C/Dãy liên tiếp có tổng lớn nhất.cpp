#include <stdio.h>
 
 
int max(int a, int b) {
	if (a >= b) return a;
	else return b;
}
 
 
int main()
{
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int sum = a[0];
	int dem = a[0];
 
	for (int i = 1; i < n; i++)
	{
		dem = max(a[i], dem + a[i]); //1 3 5 7 10 11 12 13
		sum = max(sum, dem);
	}
	printf("%d", sum);
	return 0;
}