#include <stdio.h>
#include <math.h>

int giaithua(int n) {
   int f;
    
   for(f = 1; n > 1; n--)
      f *= n;
       
   return f;
}
 
int pascal(int n,int r) {
   return giaithua(n) / ( giaithua(n-r) * giaithua(r) );
}

int main() 
{
    long long n;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (pascal(i,j)) printf("%d ", pascal(i,j));
            
        }
        printf("\n");
    }
    
    return 0;
}