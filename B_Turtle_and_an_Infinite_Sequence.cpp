#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// kairveee codes 
int kairvee(int l, int r) {
    if (l == r) {
        return l;
    }
    int jawab = 0;
    int kair = 0;
    while (l != r) {
        l >>= 1;
        r >>= 1;
        kair++;
    }
    jawab = r << kair;
    jawab |= (1 << kair) - 1;
    return jawab;
}

void solve() {
    int n, m;
    cin >> n >> m;
    if (n - m > 0) {
        cout << kairvee(n - m, n + m) << endl;
    } else {
        cout << kairvee(0, n + m) << endl;
    }
}

int main() {
    int titys;
    cin >> titys;
    while (titys--) {
        solve();
    }
    return 0;
}
