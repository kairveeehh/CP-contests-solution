
#include <bits/stdc++.h>
using namespace std;

//kairvee codeess 
typedef long long ll;
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
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
int sum(int x, int n) {
    int k = n / x;
    return x * (k+1) * (k) / 2; 
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    vector<int> res(t);

    REP (i , t) {
        int n;
        cin >> n;
        int ms = 0;
        int b = 2;

        for (int x = 2; x <= n; ++x) {
            int cs = sum(x, n);
            if (cs > ms) {
                ms = cs;
                b = x;
            }
        }

        res[i] = b;
    }

    REP(i , t) {
        cout << res[i] << endl;
    }

    return 0;
}

