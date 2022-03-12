#include <stdio.h>
#include <math.h>
//16 2 3 5 7 4 5 8 9 7 11 8 9 6 7 10 12
//9 4 5 6 7 8 9 1 2 3
int main()
{
	int n, count = 1, count2 = 1, start = -1, end = -1, soday = 0;
	scanf("%d", &n);
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[i] = 0;
	}
	start = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] < a[i + 1]) {
			count++;
			end = i + 1;
			if (count > count2) count2 = count;
		}
		else {
			if (end != -1) {
				b[start] = end;
				if (end - start == count2 - 1) soday++;
			}
			start = i+1;
			count = 1;
		}
	}
 
	
	if (end != -1) {
		if (end - start == count2 - 1) {
			soday++;
			b[start] = end;
		}
 
	}
	
	if (soday <= 1) {
		printf("%d\n", count2);
		for (int i = 0; i < n; i++) {
		if (b[i] > 0) {
			for (int j = i; j <= b[i]; j++) printf("%d ", a[j]);
			}
		}
	} else {
		printf("%d\n", count2);
		for (int i = 0; i < n; i++) {
		if (b[i] > 0 && b[i] - i + 1 == count2) {
			for (int j = i; j <= b[i]; j++) printf("%d ", a[j]);
			printf("\n");
		}
		}
	}
}
 
	
 
	
 
 