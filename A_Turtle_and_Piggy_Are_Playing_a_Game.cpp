#include <iostream>
#include <cmath> // For using floor()

using namespace std;

int kairvee(int l, int r) {
  // Calculate the maximum log2 within the range (indirectly reflects prime factors)
  int maxLog2 = log2(r);// More accurate score calculation

  return maxLog2;  // Score is the difference in log2 values
}

int main() {
  int tits;
  cin >> tits;

  while (tits--) {
    int l, r;
    cin >> l >> r;
    cout << kairvee(l, r) << endl;
  }

  return 0;
}
