#include <iostream>
#include <vector>

using namespace std;

#define int long long

                                          signed main() { int t;cin>>t;while(t--)
 {
                 int n, l;cin >> n >> l;vector<int> ans;ans.push_back(l);
bool flag = true;
                        for (int i = 0; i < n - 1; i++)
  { ans.push_back(ans.back() + 1 + l);
                                                flag = (ans.back() > 1e9) ? false : flag;
  }
                                       for (int i = 0; i < ans.size(); i++)
  {
                                       cout << (flag ? ans[i] : i + 1) << " ";
  }
  cout << endl;
 }
 return 0;
}
