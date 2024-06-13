#include <bits/stdc++.h>
using namespace std;

//kairvee codeess 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define REP(i, a) for (ll i = 0; i < a; i++)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v))
#define F first
#define S second

const ll INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
vector<ll> primes;
vector<ll> sqq;

void pre(ll maxx) {
    vector<bool> primeh(maxx + 1, true);
    primeh[0] = primeh[1] = false;

    for (ll i = 2; i * i <= maxx; i++) {
        if (primeh[i]) {
            for (ll j = i * i; j <= maxx; j += i) {
                primeh[j] = false;
            }
        }
    }
  
    for (ll i = 2; i <= maxx; i++) {
        if (primeh[i]) {
                                                       primes.push_back(i);
            sqq.push_back(i * i);
        }
    }
}

bool findd(ll N) {
    ll len = primes.size();

    for (ll i = 0; i < len; i++) {
        for (ll j = i + 1; j < len; j++) {
                                                                                 ll rem = N - sqq[j] - sqq[i];
            if (rem <= 0) break;
                                                                                    if (binary_search(sqq.begin(), sqq.end(), rem) &&
                rem != sqq[i] && rem != sqq[j]) {return true;
            }
        }
    }
    return false;
}

                                                            void solve(ll N) {
    if (N < 6) {
                                                                      cout << "NO" << endl;
        return;
    }

    if (!findd(N)) {
                                                                              cout << "no" << endl;
    } else {
                                          cout << "yes" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
                                                                           ll maxx = sqrt(1e10) + 1;
                                                        pre(maxx);
    ll t;
                                                            cin >> t;
    while (t--) {
        // Add your code here
        ll n;
        cin >> n;
        solve(n);
    }

    return 0;
}