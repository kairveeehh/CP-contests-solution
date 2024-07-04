#include <iostream>
#include <vector>
#include <map>
#include <climits>

using namespace std;

void solve() {
    int t;
    cin >> t;

    vector<int> res;

                                                                            for (int _ = 0; _ < t; ++_) {
        int a;
        cin >> a;

        vector<int> v(a);
                                                          for (int i = 0; i < a; ++i) {
            cin >> v[i];
        }

        map<int, int> mp;
                                               for (int num : v) {
            mp[num]++;
        }

        int ans = INT_MAX;

        // Iterate over the frequency map
                                                                   for (auto it = mp.begin(); it != mp.end(); ++it) {int key = it->first;int value = it->second;int r = a - value;int l = key * r;ans = min(ans, l);
        }

        // Also consider the case where the entire array is already the same
        ans = min(ans, a);

        res.push_back(ans);
    }

                                                for (int result : res) {
        cout << result << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
