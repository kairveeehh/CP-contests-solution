#include <bits/stdc++.h>
//kairvee codes
using namespace std;

#define lol long long
#define endl "\n"


int main() {
    lol tits = 1;
    cin >> tits;
    
    for (lol k = 0; k < tits; ++k) {
        lol n;
        cin >> n;

        lol a[n];
        unordered_map<lol, lol> m;
        for (lol i = 0; i < n; ++i) {
            cin >> a[i]; 
            m[a[i]]++;
        }

        lol j = 0;
        set<lol> s, ss;
        while (m[j] >= 2) {
            s.insert(j);
            ss.insert(j);
            j++;
        }

        if (m[j] > 0) {
            cout << -1 << endl;
        } else {
            lol r = 0;
            for (lol i = 0; i < n; ++i) {
                if (s.find(a[i]) != s.end()) {
                    s.erase(a[i]);
                }
                if (s.size() == 0) {
                    r = i + 1;
                    break;
                }
            }

            for (lol i = r; i < n; ++i) {
                if (ss.end() != ss.find(a[i])) {
                    ss.erase(a[i]);
                }
            }

            if (ss.size() != 0) {
              cout << -1 << endl;
            } else {
                 cout << 2 << endl;
                cout << 1 << " " << r << endl;
                cout << r + 1 << " " << n << endl;   
            }
        }
    }

    return 0;
}
