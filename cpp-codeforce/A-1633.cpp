#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <set>
#include <bitset>
#include <map>
#include <chrono>
#include <random>
#include <unordered_map>
#include <stdio.h>

using namespace std;

typedef long long ll;
typedef long double ld;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
unsigned long long fiblist[120] = {
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711,
    28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578,
    5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296,
    433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049,
    12586269025, 20365011074, 32951280099, 53316291173, 86267571272, 139583862445, 225851433717,
    365435296162, 591286729879, 956722026041, 1548008755920, 2504730781961, 4052739537881,
    6557470319842, 10610209857723, 17167680177565, 27777890035288, 44945570212853,
    72723460248141, 117669030460994, 190392490709135, 308061521170129, 498454011879264,
    806515533049393, 1304969544928657, 2111485077978050, 3416454622906707, 5527939700884757,
    8944394323791464, 14472334024676221, 23416728348467685, 37889062373143906, 61305790721611591,
    99194853094755497, 160500643816367088, 259695496911122585, 420196140727489673,
    679891637638612258, 1100087778366101931, 1779979416004714189, 2880067194370816120,
    4660046610375530309, 7540113804746346429, 12200160415121876738};

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

int khac(int a, int b) {
    int count = 0;
    int arr1[3] = {a/100,a/10%10,a%10};
    int arr2[3] = {b/100,b/10%10,b%10};
    for (int i = 0; i < 3; i++) {
        if (arr1[i] != arr2[i]) count++;
    }
    return count;
}

int main()
{
    faster();
	int n; cin >> n;
    while (n--) {
        int x; cin >> x; 
        if (x % 7 == 0) printf("%d\n", x);
        else if (x >= 10 && x < 100) {
            int arr[10] = {14,21,35,42,56,63,77,84,98,105};
            printf("%d\n", arr[x/10-1]);
        } else {
            int kq = 0;
            for (int i = 105; i <= 1000; i+=7) {
                
                if (khac(i, x) == 1) {
                    printf("%d\n", i);
                    kq = 1;
                    break;
                }
            }
                int kq1 = 0;
                if (!kq) {
                    for (int i = 105; i <= 1000; i+=7) {
                    if (khac(i, x) == 2) {
                        printf("%d\n", i);
                        kq1 = 1; kq = 1;
                        break;
                     
                    }
                }

            }

            if (!kq1 && !kq) printf("777\n");
        }
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