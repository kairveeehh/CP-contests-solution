#include <bits/stdc++.h>
using namespace std;

//kairvee codeess 
typedef long long lol;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, a) for (int i = 0; i < a; i++)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v))
#define F first
#define S second

const int INF = 1e9;
const lol LINF = 1e18;
                                                                const int MOD = 1e9 + 7;
lol finally(int n, lol k, lol h) {
                                            lol ans = 0;

                           FOR(i,1,n) {
                                                                                 if (i < h) {
            lol f = k - 1; lol term = (h - i); lol cv = ( f - 1+term) / f; // Equivalent to Math.ceil((h - i) / (k - 1))
                                     lol val = max(0LL, i - cv);
                                                                   ans += val;
        } else {
            ans += n;
        }
    }

    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

                                                                       int t;
    cin >> t;
    while (t--) {
                               // Add your code here
         int n;
                                                                                           lol k, h;cin >> n >> k >> h;

                                                                                       lol result = finally(n, k, h); cout << result << "\n";
    }

    return 0;
}




