#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int tits;
    cin >> tits;
    
    while (tits--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        if (count(v.begin(), v.end(), v[0]) == n) {
            cout << -1 << endl;
            continue;
        }
        
        
        int res = n;
        int yy = 0;
        
        for (int i = 0; i < n; i++) {
            if (v[i] != v[0]) {
                res = min(res, yy);
                yy = 0;
            } else {
                yy++;
            }
        }
        
        res = min(res, yy);
        cout << res << endl;
    }
    
    return 0;
}
