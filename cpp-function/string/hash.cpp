#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

typedef long long ll;
typedef long double ld;
#define db(x) cout << (x) << '\n';
#define faster()                  \
	ios_base::sync_with_stdio(0); \
	cin.tie(NULL);                \
	cout.tie(NULL);
#define FORAB(i, a, b) for (int i = a; i < (b); i++)
#define FOR(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
// 1 3 3 1 2 111
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

const ll MOD = 1000000007;
int base = 311;
const ll maxN = 1e6 + 5;

ll mu[maxN];
ll bamS[maxN];
ll bamP[maxN];

ll gethashS(ll i, ll j)
{
	return (bamS[j] - bamS[i - 1] * mu[j - i + 1] + MOD * MOD) % MOD;
}

ll gethashP(ll i, ll j)
{
	return (bamP[j] - bamP[i - 1] * mu[j - i + 1] + MOD * MOD) % MOD;
}

ll check(ll mid, ll n)
{
	for (int i = 1; i <= n - mid + 1; i++)
	{
		int j = i + mid - 1;
		//cout << i << " " << j << " " << n - j + 1 << " " << n - i + 1 << endl;
		if (gethashS(i, j) == gethashP(n - j + 1, n - i + 1))
			return 1;
	}
	return 0;
}

int main()
{
	faster();

	ll n;
	cin >> n;
	string s;
	cin >> s;
	mu[0] = 1;
	s = " " + s;

	for (int i = 1; i <= n; i++)
	{
		bamS[i] = (bamS[i - 1] * base + s[i] - 'a' + 1) % MOD;
	}
	for (int i = 1; i <= n; i++)
	{
		mu[i] = (mu[i - 1] * base) % MOD;
	}
	
}
