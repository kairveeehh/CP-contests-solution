#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define lol long long int
#define kair vector<lol>

void solve()
{
  lol n;
  cin >> n;
  kair a(n);
  for (lol i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  kair b = a;
  sort(b.begin(), b.end());
  if (b == a)
  {
    cout << "yeS" << endl;
    return;
  }
  lol jyada = a[0];
  kair v;

  lol plus = 0;
  for (lol i = 1; i < n; ++i)
  {
    jyada = max(jyada, a[i]);
    if (a[i] < jyada)
    {
      v.push_back(i);
      plus = max(jyada - a[i], plus);
    }
  }

  lol c = 1;
  for (lol i = 1; i < v.size(); ++i)
  {
    if (v[i] == v[i - 1] + 1)
    {
      c = 0;
      break;
    }
  }

  for (auto it : v)
  {
    a[it] = a[it] + plus;
  }

  b = a;
  sort(b.begin(), b.end());
  (a == b && c == 1) ? cout << "yes" << endl : cout << "nO" << endl;
}
// kairvee c=k code haii
signed main()
{

  lol tits;
  cin >> tits;
  while (tits--)
  {
    solve();
  }
  return 0;
}
