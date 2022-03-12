
#include <stdio.h>

long long  getmax(long long  x) {
    if (x == 0) return 1;
    long long  kq = 1;
    while (x > 0) {
        kq *= 10;
        x--;
    }
    return kq;
}

long long  chuyenmin(long long  x) {
    long long  newnumber = 0;
    int pos = 0, so =0;
    while (x > 0) {
        if (x % 10 == 6) newnumber = newnumber + 5*getmax(pos);
        else newnumber = newnumber + (x%10)*getmax(pos);
        
        pos++;
        x /= 10;
    }
    return newnumber;
}
long long chuyenmax(long long  x) {
    long long  newnumber = 0;
    int pos = 0, so =0;
    while (x > 0) {
        if (x % 10 == 5) newnumber = newnumber + 6*getmax(pos);
        else newnumber = newnumber + (x%10)*getmax(pos);
        
        pos++;
        x /= 10;
    }
    return newnumber;
}



int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", chuyenmin(a) + chuyenmin(b), chuyenmax(a) + chuyenmax(b));
        
    }
    return 0;
}