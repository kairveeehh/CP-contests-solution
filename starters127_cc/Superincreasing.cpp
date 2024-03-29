#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define lol long long int


void solve() {
    lol jampu, kairvee, xoxo;
                                            cin >> jampu >> kairvee >> xoxo;kairvee--;
                                                     cout << (kairvee >= 30 ? "NO" : (xoxo >= pow(2, kairvee) ? "YES" : "NO")) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

                          lol titss; cin >> titss; while (titss--) {
                                                   solve();
    }

    return 0;
}
