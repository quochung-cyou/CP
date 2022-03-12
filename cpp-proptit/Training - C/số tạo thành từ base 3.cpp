#include <stdio.h>
#include <string.h>
 
int checksum(int n) {
	if(n==1) return 1;
    if(n%3==2) return 0;
    return checksum(n/3);
}



int main()
{
	
	int n;
	scanf("%d", &n);
	while (n > 0) {
		int x;
		scanf("%d", &x);
		while (1) {
			if (checksum(x) == 1) break;
			else x++;
		}
		printf("%d\n", x);
		n--;
	}


 
}