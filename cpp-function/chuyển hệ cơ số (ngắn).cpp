#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stringstream ss;
    ss << hex << s;
    unsigned n;
    ss >> n;
    bitset<32> b(n);
    string kq = b.to_string();

}


//source: https://stackoverflow.com/questions/18310952/convert-strings-between-hex-format-and-binary-format
