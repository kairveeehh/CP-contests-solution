

#include <iostream>
#include <cmath>
#define lol long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lol t = 1;
    cin >> t;

    while (t--) {
        lol n;
        cin >> n;
        lol a = n, b = n;

        lol c = log2(n) + 1;
        lol multiplier = pow(2, c);

        a *= multiplier;
        b *= multiplier;

        b += n;

        cout << a << " " << b << endl;
    }

    return 0;
}
