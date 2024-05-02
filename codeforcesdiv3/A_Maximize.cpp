#include <iostream>

using namespace std;

int findgc(int a, int b) {
    if (b == 0)
        return a;
    return findgc(b, a % b);
}

int main() {
    int tits;
    cin >> tits;

    while (tits--) {
        int xxx;
        cin >> xxx;

        // We choose yayaya = xxx - 1 if xxx is greater than 2,
        // Otherwise, we choose yayaya = 1 to maximize findgc(xxx, yayaya) + yayaya
        int yayaya = (xxx > 2) ? xxx - 1 : 1;

        cout << yayaya << endl;
    }

    return 0;
}
