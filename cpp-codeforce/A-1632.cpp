#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfenv>
#include <cfloat>
#include <chrono>
#include <cinttypes>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <immintrin.h>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <streambuf>
#include <string>
#include <tuple>
#include <type_traits>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;


typedef long long ll;
const int MOD = 1000000007;
typedef long double ld;
#define db(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FORAB(i, a, b) for (int i=a; i<(b); i++)
#define FOR(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
//1 3 3 1 2 111

string revstr(string& str)
{
    int n = str.length();
    string news = str;
    for (int i = 0; i < n / 2; i++)
        swap(news[i], news[n - i - 1]);
    return news;
}

int main()
{
    faster();
	int n; cin >> n;
    while (n--) {
        int a; cin >> a;
        string t; cin >> t;
        if (a == 1) cout << "YES\n";
        else if (a == 2 && t == revstr(t)) cout << "NO\n";
        else if (a == 2 && t != revstr(t)) cout << "YES\n";
        else  cout << "NO\n";
    }
}

//BBGBGBGB
//BGBGBGBB
//GBGBGBBB
//GGBGBBBB



//Random function stuff 

void sortday(int t, int a[]) {
    for (int i = 0; i < t-1; i++)     //bubble sort day chinh
	for (int j = 0; j < t-i-1; j++)
	if (a[j] > a[j+1]) {
		int tmp = a[j];  
		a[j] = a[j+1];
		a[j+1] = tmp;
	}
}

void split(string s, string sep)
{
    size_t e1 = s.find_first_of(sep);
    string p1 = s.substr(0, e1);
    string p2 = s.substr(e1 + 1);
}

int power(int x, unsigned int y, int p)
{
    int res = 1;     
    x = x % p;            
    while (y > 0)
    {
        if (y & 1) res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
bool miillerTest(int d, int n)
{
    int a = 2 + rand() % (n - 4);
    int x = power(a, d, n);
    if (x == 1  || x == n-1)
       return true;
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
 
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
    return false;
}

bool isPrime(int n)
{
    int k = 10000;
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
    for (int i = 0; i < k; i++)
         if (!miillerTest(d, n))
              return false;
    return true;
}