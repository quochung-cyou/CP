#include <stdio.h>
 
int main()
{
	int n;
	scanf("%d", &n);
	int a[n+5];
	int b[n+5]; //mảng cộng dồn: (a2-a1),(a3-a2),(a4-a3),....
	int c[100000] = {};
	long long sum = 0;
	long long tong = n*(n+1)/2;
	for (int i = 0; i < n-1; i++) {
		scanf("%d", &a[i]);
		if (i > 0) b[i] = b[i-1] + a[i]; 
		else b[i] = a[i];
		sum += b[i];
	}

	//a1*n + sum = a1 + a2 + a3 +... + an
	//suy ra số đầu tiên
	int x = (tong-sum)/n;
	int sokhoidau = x, kq = 1;
	if (sokhoidau > 0 && sokhoidau <= n && c[sokhoidau] == 0) c[sokhoidau] = 1;
	else kq = 0;
		
	
	//ktra xem dãy tạo thành có đúng không
	if (kq) {
		for (int j = 0; j < n - 1; j++) 
		{
			sokhoidau += a[j];
			if (sokhoidau > 0 && sokhoidau <= n && c[sokhoidau] == 0) c[sokhoidau] = 1;
			else {
				kq = 0;
				break;
			}
		}
	}
	

	if (kq)
	{
		printf("%d ", x);
		for (int k = 0; k < n - 1; k++)
		{
			printf("%d ", a[k] + x);
			x += a[k];
		}
	}
	else printf("-1");



}