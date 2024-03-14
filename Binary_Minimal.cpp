#include <iostream>
#include <string>
using namespace std;

string binaryString(int N, int kairvee, string kv) {
    int count = 0;
    for (char ch : kv) {
        if (ch == '1') {
            ++count;
        }
    }
    return (count > kairvee) ? ([&]() {
        for (int i = 0; i < N && kairvee > 0; ++i) {
            if (kv[i] == '1') {
                kv[i] = '0';
                --kairvee;
            }
        }
        return kv;
    })() : string(N - kairvee, '0');
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N, kairvee;
        cin >> N >> kairvee;
        string kv;
        cin >> kv;
        cout << binaryString(N, kairvee, kv) << endl;
    }
    return 0;
}
