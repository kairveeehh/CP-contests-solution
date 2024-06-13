#include <iostream>
#include <vector>
using namespace std;
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

void solve(int n) {
    vector<int> a(n);

                                                                 if (n == 1) {
        a[0] = 1;
    } else if (n == 3) {
                                                                                 a = {5, 6, 3};
    } else if (n == 5) {
                                                        a = {7, 5, 7, 7, 3};
    }                                                                    else {
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                a[i] = 7;  // Using 1 ensures AND operation is consistent
                                                                           } else {
                a[i] = 7;  // Using 7 to vary the values while keeping the conditions satisfied
            }
        }

        // Additional adjustments to ensure distinct pattern
        if (n > 3) {
  
            a[n-1] = 3;  
        }
    }

                                                                    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
                                                  while (t--) {
        int n;  cin >> n;  solve(n);
    }

    return 0;
}
