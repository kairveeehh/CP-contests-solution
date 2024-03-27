#include <iostream>
#include <string>

using namespace std;

string convertToTitle(int cnn) {
    string result = "";
    while (cnn > 0) {
        
        cnn--;

        
        int rem = cnn % 26;

      
        result = char('A' + rem) + result;

      
        cnn /= 26;
    }
    return result;
}

int main() {
  
    int cnn;
  
    cin >> cnn;
    string columnTitle = convertToTitle(cnn);
    cout << columnTitle << endl;
    return 0;
}
