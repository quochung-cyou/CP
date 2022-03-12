#include <stdio.h>
#include <math.h>
#include <string.h>

int dongsoi[3] = {3,4,5};



int main()
{
    long long  a, b, nim;
    char name[50];
    scanf("%s\n", name);
    scanf("%lld %lld", &a, &b);
    dongsoi[a-1] -= b;
    nim = dongsoi[0]^dongsoi[1]^dongsoi[2];
    if (nim > 0) {
         if (strcmp("Daisy", name) == 0) printf("Louis");
         else printf("Daisy");
    }
    else printf("%s", name);
    
    return 0;
}
 