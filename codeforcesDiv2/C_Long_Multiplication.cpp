#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define endl "\n"
#define sp " "
#define pb push_back

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while (t--)
  {
    string s1, s2; cin >> s1 >> s2;
    int n = s1.size();
    bool chk = true;
    int ind = -1;
    for (int i = 0; i < n; ++i)
    {
      if (s1[i] != s2[i]) {
        chk = false;
        ind = i;
        break;
      }
    }
    if (chk == true) {
      cout << s1 << endl;
      cout << s2 << endl;
    }
    else {
      for (int i = ind + 1; i < n; ++i)
      {
        if ((s1[ind] - '0') < (s2[ind] - '0')) {
          if ((s2[i] - '0') > (s1[i] - '0')) {
            swap(s1[i], s2[i]);
          }
        }
        else {
          if ((s2[i] - '0') < (s1[i] - '0')) {
            swap(s1[i], s2[i]);
          }
        }
      }
      cout << s1 << endl;
      cout << s2 << endl;
    }
  }

}