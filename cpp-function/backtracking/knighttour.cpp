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

int dix[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int diy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int bang[15][15] = {};
int n;

void Xuat()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << bang[i][j] << " ";
        }
        cout << endl;
    }
}

void Try(int vitri, int x, int y)
{
    // cout << "try " << vitri << endl;
    for (int j = 0; j < 8; j++)
    {
        int nx = x + dix[j];
        int ny = y + diy[j];
        if (1 <= nx && nx <= n && 1 <= ny && ny <= n && bang[nx][ny] == 0)
        {
            bang[nx][ny] = vitri;
            if (vitri == n * n)
                Xuat();
            else
            {
                Try(vitri + 1, nx, ny);
                bang[nx][ny] = 0;
            }
        }
    }
}

int main()
{
    int x, y;
    cin >> n;
    cin >> x >> y;
    bang[x][y] = 1;
    Try(2, x, y);
}
