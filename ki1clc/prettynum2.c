#include <stdio.h>

int getmax(int n)
{
    int kq = 1;
    while (n != 0)
    {
        kq *= 10;
        n--;
    }
    return kq;
}

int getsum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d\n", &n);
    for (int c = 0; c < n; c++)
    {
        long long a, amount = 0;
        scanf("%lld", &a);

        if (a % 2 == 0) //So chu so chan
        {

            for (int i = getmax(a / 2 - 1); i < getmax(a / 2); i++)
            {
                if (getsum(i) % 5 == 0)
                    amount++;
            }
            printf("%lld\n", amount);
        }

        else //So chu so le
        {
            for (int j = 0; j < 10; j++)
            {
                for (int i = getmax(a / 2 - 1); i < getmax(a / 2); i++)
                {
                    if ((getsum(i) * 2 + j) % 5 == 0)
                        amount++;
                }
            }
            printf("%lld\n", amount / 2);
        }
    }

    return 0;
}