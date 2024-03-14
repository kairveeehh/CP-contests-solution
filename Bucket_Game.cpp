#include <iostream>
#include <vector>
//kairvee codesss
using namespace std;

                     string solve(int n, const vector<int>& v) {
                                         int won = 0, gol = 0, jyadaq = 0;
                      for (int i = 0; i < n; ++i) {
                                            if (v[i] == 1)
            won++;
        else {
                                                                  if (v[i] > 2) {
                gol++;
                jyadaq += v[i] - 2;
  } else
                gol++;
        }
    }
    int  b = won / 2 , a = (won + 1) / 2;
                                         int jhanda = won % 2;jhanda = (jyadaq % 2 == 1) ? (jhanda ? 0 : 1) : (jhanda ? 1 : 0);a += jhanda ? gol : 0;b += jhanda ? 0 : gol;return (b > a) ? "bob" : (a > b) ? "alice" : "Draw";
}

int main() { int tits; cin >> tits; while (tits--) { int n;cin >> n;
        vector<int> v(n);
                                                  for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        cout << solve(n, v) << endl;
    }
    return 0;
}
