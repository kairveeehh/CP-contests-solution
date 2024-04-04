#include <iostream>
#include <algorithm>
// kairvee codess
#define lol long long int
using namespace std;

void solve()
{
  lol n, ansss = 0;
  cin >> n;
  lol a[n + 1];
  lol i = 1;
  while (i <= n)
  {
    cin >> a[i];
    i++;
  } 
  sort(a + 1, a + 1 + n);
  i = 1;
  while (i <= n)
  {
    ansss += abs((i - 1) - a[i]);
    i++;
  }
  cout << ansss << '\n';
}
// handling the edge case
int main()
{
  lol tits;
  cin >> tits;
  while (tits--)
  {
    solve();
  }
  return 0;
}
