#include <stdio.h>
#include <math.h>


int lfp(long x1, long y1, long x2, long y2)
{
	long a = y2 - y1;
	long b = x1 - x2;
	long c = a * (x1) + b * (y1);
	c;
}

int main()
{
    long x1, y1, x2, y2, x3, y3, x4, y4;
    int amount = 0;
    scanf("%ld %ld\n", &x1, &y1);
    scanf("%ld %ld\n", &x2, &y2);
    scanf("%ld %ld\n", &x3, &y3);
    scanf("%ld %ld", &x4, &y4);
 
    long a1 = x1 - x2;
    long b1 = y1 - y2;
    long a2 = x3 - x4;
    long b2 = y3 - y4;

    if (a1 == 0 && a2 == 0) printf("NO");
    else if (b1 == 0 && b2 == 0) printf("NO");
    else if ((a1 == 0 && b1 == 0) || (b1 == 0 && b2 == 0)) printf("NO");
    else printf("YES!");
	return 0;
}