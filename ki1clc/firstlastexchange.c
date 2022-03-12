#include <stdio.h>
#include <math.h>
int main()
{
    int n,sodau, socuoi,chuso, doi;
    scanf("%d", &n);
    socuoi = n % 10;
    chuso    = (int)log10(n);
    sodau = (int) (n / pow(10, chuso));
    doi  = socuoi;
    doi *= (int) round(pow(10, chuso));
    doi += n % ((int)round(pow(10, chuso)));
    doi -= socuoi;
    doi += sodau;
    printf("%d", doi);
    return 0;
}