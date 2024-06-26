#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    queue<int> q;
    int curr = -1;
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
      flag = (a[i] == b[i]) ? (a[i] == 'b' ? (curr = i, true) : true) : // Handle same characters and update curr for 'b'
                 (a[i] == 'a' && b[i] == 'c') ? (q.push(i), true)
                                              : // Push 'a' for potential 'c' replacement
                 (a[i] == 'c' && b[i] == 'a' && !q.empty() && q.front() < curr) ? (q.pop(), true)
                                                                                : // Valid 'c' replacement using queued 'a'
                 false;                                                           // Any other mismatch

      if (!flag)
      {
        cout << "No" << endl;
        break;
      }
    }

    if (flag && !q.empty())
    {
      cout << "No" << endl;
    }
    else if (flag)
    {
      cout << "Yes" << endl;
    }
  }

  return 0;
}
