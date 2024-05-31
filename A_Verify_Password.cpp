#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool kairveee(const string& kairvee) {
    int k = kairvee.length();     bool wh = false;
    
    // Track if we've seen the first letter

    // Track the last seen digit and letter
      char ll = 'a' - 1;
    char ld = '0' - 1;
  
////kairvee codesss
    for (int i = 0; i < k; ++i) {
         char c = kairvee[i];
        if (isdigit(c)) {
            // If we've already seen a letter, digits are not allowed
            if (wh) return false;
            // Check if digits are in non-decreasing order
            if (c < ld) return false;
            ld = c;
        } else if (islower(c)) {
            wh = true;
            // Check if letters are in non-decreasing order
            if (c < ll) return false;
            ll = c;
        } else {
            // Invalid character (not a lowercase letter or digit)
            return false;
        }
    }

    return true;
}

int main() {
    int tits;
    cin >> tits;
    
    while (tits--) {
        int k;
        cin >> k;
        string kairvee;
        cin >> kairvee;

       std::string result = kairveee(kairvee) ? "Yes" : "nO";
  std::cout << result << std::endl;
    }
    return 0;
}
