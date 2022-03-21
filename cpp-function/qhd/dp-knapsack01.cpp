

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
typedef long long ll;
const int MOD = 1000000007;
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
using namespace std;

//----------------------------------------------------------------

int knapsack(vi khoiluong, vi giatri, int n, int tongkhoiluong) {
    int dp[n+1][tongkhoiluong+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= tongkhoiluong; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (khoiluong[i-1] <= j) {
                dp[i][j] = max(dp[i-1][j], giatri[i-1] + dp[i-1][j-khoiluong[i-1]]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][tongkhoiluong];
}



int main() {
    int n, m;
    cin >> n >> m;
    vi khoiluong, giatri;
    FOR(i, n) {
        int a, b;
        cin >> a >> b;
        khoiluong.pb(a);
        giatri.pb(b);
    }
    cout << knapsack(khoiluong, giatri, n, m) << endl;
    

}
 


//----------------------------------------------------------------

/* ░█████╗░░█████╗░  ██████╗░██╗░░░░░░██████╗
    ██╔══██╗██╔══██╗  ██╔══██╗██║░░░░░██╔════╝
    ███████║██║░░╚═╝  ██████╔╝██║░░░░░╚█████╗░
    ██╔══██║██║░░██╗  ██╔═══╝░██║░░░░░░╚═══██╗
    ██║░░██║╚█████╔╝  ██║░░░░░███████╗██████╔╝
    ╚═╝░░╚═╝░╚════╝░  ╚═╝░░░░░╚══════╝╚═════╝░ */

// NGUYEN QUOC HUNG

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

//----------------------------------------------------------------
