#include <stdio.h>

/*
a b 
c d
*/

long long matrancap2(int a, int b, int c, int d) {
	long long kq = a*d - b*c;
	return kq;
}


/*
a1 a2 a3
a4 a5 a6  
a7 a8 a9
*/
int main()
{
	int a[9];
	for (int i = 1; i <= 9; i++) scanf("%d", &a[i]);
	long long ketqua = a[1]*matrancap2(a[5],a[6],a[8],a[9]) - a[2]*matrancap2(a[4],a[6],a[7],a[9]) + a[3]*matrancap2(a[4],a[5],a[7],a[8]);
	printf("%lld", ketqua);
}