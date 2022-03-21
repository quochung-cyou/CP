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

#include <iomanip>
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

typedef vector<int> bigInt;
const int BASE = 1000;
const int LENGTH = 3;

bigInt &fix(bigInt &a)
{
    a.push_back(0);
    for (int i = 0; i + 1 < a.size(); ++i)
    {
        a[i + 1] += a[i] / BASE;
        a[i] %= BASE;
        if (a[i] < 0)
            a[i] += BASE, --a[i + 1];
    }
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
    return a;
}
bigInt big(int x)
{
    bigInt result;
    while (x > 0)
    {
        result.push_back(x % BASE);
        x /= BASE;
    }
    return result;
}
bigInt big(string s)
{
    bigInt result(s.size() / LENGTH + 1);
    for (int i = 0; i < s.size(); ++i)
    {
        int pos = (s.size() - i - 1) / LENGTH;
        result[pos] = result[pos] * 10 + s[i] - '0';
    }
    return fix(result), result;
}
int compare(bigInt &a, bigInt &b)
{
    if (a.size() != b.size())
        return (int)a.size() - (int)b.size();
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return a[i] - b[i];
    return 0;
}
#define DEFINE_OPERATOR(x) \
    bool operator x(bigInt &a, bigInt &b) { return compare(a, b) x 0; }
DEFINE_OPERATOR(==)
DEFINE_OPERATOR(!=)
DEFINE_OPERATOR(>)
DEFINE_OPERATOR(<)
DEFINE_OPERATOR(>=)
DEFINE_OPERATOR(<=)
#undef DEFINE_OPERATOR
void operator+=(bigInt &a, bigInt b)
{
    a.resize(max(a.size(), b.size()));
    for (int i = 0; i < b.size(); ++i)
        a[i] += b[i];
    fix(a);
}

void operator-=(bigInt &a, bigInt b)
{
    for (int i = 0; i < b.size(); ++i)
        a[i] -= b[i];
    fix(a);
}

void operator*=(bigInt &a, int b)
{
    for (int i = 0; i < a.size(); ++i)
        a[i] *= b;
    fix(a);
}

void divide(bigInt a, int b, bigInt &q, int &r)
{
    for (int i = int(a.size()) - 1; i >= 0; --i)
    {
        r = r * BASE + a[i];
        q.push_back(r / b);
        r %= b;
    }
    reverse(q.begin(), q.end());
    fix(q);
}

bigInt operator+(bigInt a, bigInt b)
{
    a += b;
    return a;
}
bigInt operator-(bigInt a, bigInt b)
{
    a -= b;
    return a;
}
bigInt operator*(bigInt a, int b)
{
    a *= b;
    return a;
}

bigInt operator/(bigInt a, int b)
{
    bigInt q;
    int r = 0;
    divide(a, b, q, r);
    return q;
}
int operator%(bigInt a, int b)
{
    bigInt q;
    int r = 0;
    divide(a, b, q, r);
    return r;
}

bigInt operator*(bigInt a, bigInt b)
{
    bigInt result(a.size() + b.size());
    for (int i = 0; i < a.size(); ++i)
        for (int j = 0; j < b.size(); ++j)
            result[i + j] += a[i] * b[j];
    return fix(result);
}
istream& operator >> (istream& cin, bigInt &a) {
  string s; cin >> s;
  a = big(s);
  return cin;
}

ostream& operator << (ostream& cout, const bigInt &a) {
  cout << a.back();
  for (int i = (int)a.size() - 2; i >= 0; --i)
    cout << setw(LENGTH) << setfill('0') << a[i];
  return cout;
}