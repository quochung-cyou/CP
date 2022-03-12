#include <stdio.h>

//5 (6) 1 6 2 2 -> 1
//5 (13 13 13) 12 12 -> 3
//5 1 2 3 4 (5) -> 1
//5 (6 6 6 6 6) -> 5
//5 (7 7 7 7 7) -> 5
//4 6 1 (6 6) -> 2
//5 (1 1 1 1 1) -> 5
// 5 (6 6) 7 6 6 -> 2
//5 4 3 (4) 3 3 -> 1
//5 2 3 2 (3 3) -> 2
int main()
{
	int n;
	scanf("%d", &n);
	long long a[n + 5], max = 0, batdaumax, count = 0, count2 = 0;
	for (long long i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
		if (a[i] > max) {
			max = a[i];
			batdaumax = i;
		}
	}
 
	for (long long i = 0; i < n; i++) {
		
		if (a[i] == max)
		{
			if (i - batdaumax == 1)
			{ //Lien tiep cung so
				batdaumax = i;
				count++;
				//printf("case 2/ %d %d %d i: %d\n", count, max, a[i], i+1);
				
			}
			else
			{ //Bi cach nhau 1 so
				batdaumax = i;
				count = 1;
				//printf("case 3/ %d %d %d i: %d\n", count, max, a[i], i+1);
			}
		}

		if (count > count2) count2 = count;
	}
	printf("%d\n", count2);
}