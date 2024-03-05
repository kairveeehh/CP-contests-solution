#include<bits/stdc++.h>
using namespace std;
#define lol long long
//kairveeeee coedessssss


lol jawab(lol n, lol c, lol a[]) {
    lol answer = (((c + 1) * (c + 2)) / 2);
    lol sum = 0, kv = 0;
    for (lol i = 0; i < n; i++) {
        sum = sum + a[i];
        kv = kv + ((a[i] + 2) / 2);
    }
    answer = answer - kv;
    answer = answer - (((c + 1) * n) - sum);
    lol oddCount = 0 , evenCount = 0 ;
    for (lol i = n - 1; i >= 0; i--) {
        oddCount = (a[i] % 2) ? (oddCount + 1) : oddCount;
        evenCount = (a[i] % 2) ? evenCount : (evenCount + 1);
        answer = answer + ((a[i] % 2) ? oddCount : evenCount);
    }
    return answer;
}

int32_t main() {
 
    lol tits = 1;
    cin >> tits;
    for (lol tc = 0; tc < tits; tc++) {
        lol n, c;
        cin >> n >> c;
        lol a[n];
        for (lol i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << jawab(n, c, a) << endl;
    }
    return 0;
}
