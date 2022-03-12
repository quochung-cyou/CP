#include <stdio.h>
#include <math.h>

int checkperfect(int a)
{
    long tong = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
            tong = tong + i;
    }

    if (tong == a)
        return 1;
    else
        return 0;
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
        int ketqua = checkperfect(i);
        if (ketqua == 1) {
            printf("%ld ", i);
        }
            
    }
    return 0;
}