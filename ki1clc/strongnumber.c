#include <stdio.h>

int main()
{
    int i, a, tempa, tong;
    long fact;
    scanf("%d", &a);
    tempa = a;
    tong = 0;
    while(a > 0)
    {
        int chuso = a % 10;
        fact = 1;
        for(i=1; i<= chuso; i++) fact = fact * i;
        tong += fact;
        a = a / 10;
    }

    if(tong == tempa) printf("1");
    else printf("0");

    return 0;
}