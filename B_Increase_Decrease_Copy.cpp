#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tits;
    cin >> tits;

    while (tits--) {
        int no;
        cin >> no;
        vector<int> a(no), mff(no + 1);
        for (auto &i : a) cin >> i;
        for (auto &i : mff) cin >> i;

        int kv = mff.back();
        int jawab = 0, f = 0, add = 1e15;

        for (int i = 0; i < no; ++i) {
            jawab += abs(a[i] - mff[i]);

            // Check if kv falls within 
            if (kv >= min(a[i], mff[i]) && kv <= max(a[i], mff[i])) {
                f = 1;  // Set f to true if kv is within the range
            }

            add = min({add, abs(a[i] - kv), abs(mff[i] - kv)});
        }

        
        int akhirijwab;
        if (f) {
            akhirijwab = jawab + 1; // Add 1 if kv is within the range
        } else {
            akhirijwab = jawab + add + 1; // Add minimum difference + 1 otherwise
        }

        cout << akhirijwab << endl;
    }

    return 0;
}
