#include <stdio.h>
#include <math.h>
 
 
 
 
//4 1 0 -2 0 1
//4 1 0 -4 0 3
int main()
{
	int n;
	scanf("%d", &n);
	int a[n+1];
	long long dem = 0;
	for (long long i = 0; i < n + 1; i++) scanf("%d", &a[i]);
	if (n == 1) {
		for (long long i = -200000; i <= 200000; i++) {
			if (a[0]*i + a[1] == 0) dem++;
		}
	} else if (n == 2) {
		for (long long i = -200000; i <= 200000; i++) {
			if (a[0]*pow(i,2) + a[1]*i + a[2] == 0) dem++;
		}
	} else if (n == 3) {
		for (long long i = -200000; i <= 200000; i++) {
			if (a[0]*pow(i,3) + a[1]*pow(i,2) + a[2]*i + a[3] == 0) dem++;
		}
	} else if (n == 4) {
		for (long long i = -200000; i <= 200000; i++) {
			if (a[0]*pow(i,4) + a[1]*pow(i,3)+ a[2]*pow(i,2) + a[3]*i + a[4] == 0) dem++;
		}
	}
	printf("%lld", dem);
 
 
 
 
 
}