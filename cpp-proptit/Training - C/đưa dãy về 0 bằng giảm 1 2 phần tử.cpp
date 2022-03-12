#include <stdio.h>
#include <string.h>
 
int main()
{
 
	int n;
	scanf("%d", &n);
	long a[n];
	long long max = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%ld", &a[i]);
		if (a[i] > max) max = a[i];
		sum += a[i];
	}
	if (sum < max*2 || sum % 2 == 1) printf("NO");
	else printf("YES");

 
 
 
}