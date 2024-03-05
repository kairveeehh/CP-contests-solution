#include <bits/stdc++.h>
#include <algorithm>
//kairveecodesw
//kairveecodes
using namespace std;

void jawab() {
    int nn;
    cin >> nn;
    string kv, t;
    cin >> kv;
    t = kv;
    reverse(t.begin(), t.end());
    bool chhotahai = (t >= kv) ? true : false;
    cout << (chhotahai ? kv : (t + kv)) << endl;
}

int main() {
    int tits;
    cin >> tits;
    for (int i = 0; i < tits; ++i) {
        jawab();
    }
    return 0;
}
