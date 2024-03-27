#include <iostream>
#include <vector>

using namespace std;

bool jeetega(const vector<int>& t) {
    int n = t.size();
    if (n == 0) {
        return false;
    }

    vector<bool> dp(n + 1, false);

    dp[1] = true;

    for (int i = 2; i <= n; i++) {
        dp[i] = (!dp[i - 1] || !dp[i - 2]);
    }

    return dp[n];
}

int main() {
    vector<int> t;
    int p;

    while (cin >> p) {
        t.push_back(p);
        if (cin.get() == '\n') {
            break;
        }
    }

    bool can_win = jeetega(t);

    cout << (can_win ? "true" : "false") << endl;

    return 0;
}
