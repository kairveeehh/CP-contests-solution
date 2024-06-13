
#include <bits/stdc++.h>
using namespace std;

//lairvee codeess 
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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        // Add your code here
        int n, l;
        cin >> n >> l;

      
        int min = l * (l + 1) / 2;
      
        int minle = min + l + 1;

        if (min + l - 1 <= n) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    

    return 0;
}

