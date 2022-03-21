#include <stdio.h>
int main() {
	long a, b;
	scanf("%ld %ld", &a, &b);
    printf("%.6Lf", (long double) -b/a);
    
	
	return 0;
}