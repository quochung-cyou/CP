# include <stdio.h>
# include <math.h>
 


int checkprime(int n)
{
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    return 1;
}

int main()
{
    long n;
    scanf("%ld", &n);
    if (n == 1) {
        printf("-1");
        return 0;
    }
    for (int i = 2; i <= n; i++) {
        int ketqua = 1;
        if (checkprime(i) == 1) {
            int tempi = i;
            while (tempi > 10) {
                tempi /= 10;
                if (checkprime(tempi) == 0) {
                    ketqua = 0;
                    break;
                }
            }
        

        if (ketqua == 1) printf("%ld ", i);
        }
    }

    

}