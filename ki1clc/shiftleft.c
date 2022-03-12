#include <stdio.h>
 
 
 
int main()
{
 
	long long n, k, sttb = 1, sttc = 1;
	scanf("%lld", &n, &k);
    long long a[n+1];
    long long b[n+1];
    long long c[n+1];
    a[0] = 1;
    k %= n;
    for (long long  i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
	}
	scanf("%lld", &k);
	for (long long i = 1; i <= n; i++) {
        if (n - i < n - k) {
            b[sttb] = a[i];
            sttb++;
        }
        else {
            c[sttc] = a[i];
            sttc++;
        }      
    }
    for (long long  i = 1; i <= n-k; i++) {
        printf("%lld ", b[i]);
    }
	    for (long long  i = 1; i <= k; i++) {
        printf("%lld ", c[i]);
    }
 
}