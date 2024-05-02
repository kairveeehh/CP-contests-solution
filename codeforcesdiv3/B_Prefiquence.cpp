#include <iostream>
#include <string>

using namespace std;

int kairvee(string whteer, string whtver) {
    int nn = whteer.length();
    int mm = whtver.length();

    int k = 0, l = 0;
    while (l < mm && k < nn) {
        if (whteer[k] == whtver[l]) {
            k++;
        }
        l++;
    }

    return k;
}

int main() {
    int tits;
    cin >> tits;

    while (tits--) {
        int nn, mm;cin >> nn >> mm;

        string whteer, whtver;cin >> whteer >> whtver;

        cout << kairvee(whteer, whtver) << endl;
    }

    return 0;
}
