#include <stdio.h>
#include <math.h>

int checkstrong(int a)
{
    long i, tempa = a, tong = 0, fact;
    while(a > 0)
    {
        int chuso = a % 10;
        fact = 1;
        for(i=1; i<= chuso; i++) fact = fact * i;
        tong += fact;
        a /= 10;
    }
    if(tong == tempa) return 1;
    else return 0;
}

int main()
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    if (a > b) {
        long tmp = a;
        a = b;
        b = tmp;
    }
    for (long i = a; i <= b; i++)
    {
        if (checkstrong(i) == 1) {
            printf("%ld ", i);
        }
            
    }
    return 0;
}