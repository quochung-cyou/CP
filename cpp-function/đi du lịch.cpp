#include <bits/stdc++.h>
#pragma GCC optimize("Ofast", "unroll-loops")
#pragma GCC target("sse", "sse2", "sse3", "ssse3", "sse4", "avx")
using namespace std;
#define YES puts("YES")
#define NO puts("NO")
#define Yes puts("Yes")
#define No puts("No")
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

vector<ll> visited(50, 0);
int mang[20][20];
int buocdi[100];
int n;
ll sotien = LONG_LONG_MAX;
ll phiitnhat = LONG_LONG_MAX;
ll tongtientmp = 0;

void Try(int i)
{
    if (tongtientmp + phiitnhat * (n - i + 1) >= sotien)
        return; // ke ca dung chi phi it nhat tat ca chang con lai ma lon hon thi thoi
    for (int j = 1; j <= n; j++)
    {
        if (!visited[j])
        {
            buocdi[i] = j;
            visited[j] = 1;
            tongtientmp += mang[buocdi[i - 1]][buocdi[i]];
            if (i == n)
            {
                sotien = min(sotien, tongtientmp + mang[buocdi[n]][buocdi[1]]);
            }
            else
            {
                Try(i + 1);
            }
            visited[j] = 0;
            tongtientmp -= mang[buocdi[i - 1]][buocdi[i]];
        }
    }
}

int main()
{
    faster();
    cin >> n;
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mang[i][j];
            phiitnhat = min(phiitnhat, (ll)mang[i][j]);
        }
    }
    buocdi[1] = 1;
    visited[1] = 1; // bat dau tu 1
    Try(2);
    cout << sotien << '\n';
    return 0;
}
