int sumdiv[n + 1];
for (int i = 1; i <= n; ++i)
 for (int j = i; j <= n; j += i)
  sumdiv[j] += i;
  
//sàng ước 
//https://www.spoj.com/PTIT/problems/CPPPRI11/ (10^18 thì phải dùng https://vi.wikipedia.org/wiki/S%E1%BB%91_ho%C3%A0n_thi%E1%BB%87n)
  
  
//ước ngto lớn nhất https://www.spoj.com/PTIT/problems/CPPPRI02/
  
  int big[n + 1] = {1, 1};
for (int i = 1; i <= n; ++i)
 if (big[i] == 1)
  for (int j = i; j <= n; j += i)
   big[j] = i;
