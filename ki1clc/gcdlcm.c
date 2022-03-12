#include <stdio.h>
#include <string.h>
int main()
	{

		long long a, b, gcd;
		scanf("%lld %lld", &a, &b);
		int i;
		for(i=1; i <= a && i <= b; i++) {
        
        if (a%i==0 && b%i==0)  gcd = i;
           
        }
		printf("%lld\n", gcd);
		printf("%lld", (a*b)/gcd);
		

	}