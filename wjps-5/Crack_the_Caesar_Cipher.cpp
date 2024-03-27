#include <iostream>
#include <string>

using namespace std;

bool decipherCaesarCipher(const string& s, const string& goal) {
    int n = s.length();
    int m = goal.length();

  
    if (n != m) {
        return false;
    }

  
    string s2 = s + s;
    return s2.find(goal) != string::npos;
}

int main() {
    string s, goal;
    cin >> s >> goal;

    bool can_decipher = decipherCaesarCipher(s, goal);
    cout << (can_decipher ? "true" : "false") << endl;

    return 0;
}
