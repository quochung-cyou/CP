#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <bitset>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
const int MOD = 1000000007;
#define db(x) cout << (x) << '\n';
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
using namespace std;

const ll N = 1e7+5;
bool isPrime[N+5];
vl so;
 
void sieve() {
    for(ll i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(ll i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             for(ll j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
}
 
ll findPowerOfP(ll n, ll p)
{
    ll x = 0;
    while (n)
    {
        n /= p;
        x += n;
    }
    return x;
}


vector<pair<ll, ll>> factorize(ll n)
{
    vector<pair<ll, ll>> ans;
    int count = 0;
    while (!(n % 2)) {
        n >>= 1;
        count++;
    }
    if (count) ans.pb(mp(2,count));
    for (ll i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count) ans.pb(mp(i,count));
    }
    if (n > 2) ans.pb(mp(n,1));
    return ans;
}

ll min(ll x, ll y) {
    return x < y ? x : y;
}

int  main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n, k;
        scanf("%lld%lld", &n, &k);
        vector<pair<ll, ll>> day = factorize(k);
        ll ans = LONG_LONG_MAX;
        for (ll i = 0; i < day.size(); i++) {
            ans = min(ans, findPowerOfP(n,day[i].f)/day[i].s);
        }
        printf("%lld\n", ans);

    }
}




//----------------------------------------------------------------
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;::;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;lxxl;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;ckKKkc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;dKXXKd;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;::ccccccco0XXXXOoccccccc::;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;:lxO00000KXXXXXXK00000Oxl:;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;:lxOKXXXXXXXXXXXXK0xl:;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;:oOXXXXXXXXXXOo:;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;:xKXXXXXXXXXx:;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;o0XXKOkkOKXX0o;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;cOK0xl:;;:lxOKOc;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;:oxo:;;;;;;;;coxo:;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;:;;;;;;;;;;;;;;:;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

// NGUYEN QUOC HUNG
//----------------------------------------------------------------