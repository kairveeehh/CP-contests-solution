#include<bits/stdc++.h>
//kairvee codeassss
using namespace std;



int gino(string& kairvee) {
    int gol = 0;int ginti = 0;int won = 0;
                                             for(int i = 0; i < kairvee.length(); ++i) {char kv = kairvee[i];if(kv !='1') { ginti++;gol = max(ginti , gol);
           
        }
        else {
                                   ginti = 0;won++;
        }
    }
                                                return won + gol;
}

int main() {int tits;cin >> tits;while(tits--) {
        int n;cin >> n;string kairvee;cin >> kairvee;cout << gino(kairvee) << "\n";
    }
    return 0;
}
