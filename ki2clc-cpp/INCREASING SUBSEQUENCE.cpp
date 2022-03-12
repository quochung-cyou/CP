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

vector<string> day;

void emptyv(vi &v) {
    vector<int>().swap(v);
    //cout << v.capacity() << endl;
}

void checkarr(vi arr, int n)
{
    if (n < 2) {
        emptyv(arr);
        return;
    }
    if(!is_sorted(all(arr))) {
      emptyv(arr);
      return;
    }
    string s;
    for (int i = 0; i < n; i++) {
        s += to_string(arr[i]) + ' ';
    }
    s.substr(0, s.size() - 1);
    day.pb(s);
    emptyv(arr);
}

void subseq(vi arr, int index, vi subarr)
{
    if (index == arr.size())
    {
        int l = subarr.size();
        if (l >= 2) checkarr(subarr, l);
    }
    else
    {
        subseq(arr, index + 1, subarr);
        subarr.push_back(arr[index]);
        subseq(arr, index + 1, subarr);
    }
    emptyv(arr);
    return;
}

int main()
{
    freopen("SEQUENCE.in","r",stdin);
    int n;
    cin >> n;
    vi a(n), b;
    for (int i = 0; i < n; i++) cin >> a[i];
    subseq(a, 0, b);
    sort(day.begin(), day.end());

    for (int i = 0; i < day.size(); i++) {
      cout << day[i] << endl;
    }
    


}