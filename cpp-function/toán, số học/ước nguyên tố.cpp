# include <stdio.h>
# include <math.h>
 

int checkprime(long long n)
{
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n%2 == 0) return 0;
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        if (n%i == 0) return 0;
    }
    return 1;
    
}

int main()
{
    long long a, amount = 0;
    scanf("%lld", &a);

	
    for (long long i = 1; i <= sqrt(a); i++) {
		
		if (a % i == 0) {
			if (checkprime(i)) {
				amount++; 
			}
			if (checkprime(a/i)) {
				amount++; 
			}
			
		}
	}
	printf("%lld", amount);
}