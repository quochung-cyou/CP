//sàng 
void sieve() {
    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
}


//Sàng min
void sieve()
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (minPrime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (minPrime[j] == 0)
                {
                    minPrime[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= n; ++i)
    {
        if (minPrime[i] == 0)
        {
            minPrime[i] = i;
        }
    }
}

//sàng đoạn dài L R
        vector<bool> isPrime(R - L + 1, true);
        for (long long i = 2; i * i <= R; ++i)
        {
            for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            {
                isPrime[j - L] = false;
            }
        }
 
        if (1 >= L) isPrime[1 - L] = false;

