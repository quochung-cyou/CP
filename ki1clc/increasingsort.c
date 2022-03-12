#include <stdio.h>
//7 1 5 10 10 5 2 3
//6 16 17 4 3 5 2
//chua lam test
int main()
{
	int t;
	scanf("%d", &t);
	int a[t];
	for (int i = 0; i < t; i++) scanf("%d", &a[i]);
	
	for (int i = 0; i < t-1; i++)     //bubble sort day chinh
	for (int j = 0; j < t-i-1; j++)
	if (a[j] > a[j+1]) {
		int tmp = a[j];  
		a[j] = a[j+1];
		a[j+1] = tmp;
	}
	for (int j = 0; j < t; j++) printf("%d ", a[j]);
	

}