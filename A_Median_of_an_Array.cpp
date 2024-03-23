#include <bits/stdc++.h>
//kairvee codessss

using namespace std;

int kairvee(vector<int>& a) {
    int n = a.size();

    // Sort the array to find the current median
    sort(a.begin(), a.end());

    // Calculate the index of the median (considering even or odd lengths)
    int mi = (n - 1) / 2;

    // Count ing the number of huh needed for elements after the median
    int huh = 0;
    for (int i = mi + 1; i < n; i++) {
        if (a[i] <= a[mi]) {
            huh = huh + a[mi] +1 -a[i];
        }
    }

    return huh+1;
}

int main() {
    int tits;
    cin >> tits;

    while (tits--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << kairvee(a) << endl;
    }

    return 0;
}
