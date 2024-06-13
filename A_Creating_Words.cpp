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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  int t;
    cin >> t;
    vector<pair<string, string>> tc(t);
    
    REP( i , t) {
        cin >> tc[i].first >> tc[i].second;
    }
    
    for (int i = 0; i < t; ++i) {
        string a = tc[i].first; string b = tc[i].second;
       
        

        swap(a[0], b[0]);
   
        cout << a << " " << b << endl;
    }
    
    return 0;
}