#include <iostream>
#include <map>
#include <vector>
using namespace std;
//kairvee codessss
vector<int> getInput(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

map<int, int> countOccurrences(const vector<int>& arr) {
    map<int, int> mp;
    for (int num : arr) {
        mp[num]++;
    }
    return mp;
}

string jeeta(const vector<int>& v) {
    bool jhnda = true;
    int ptr = 0;
    while (ptr < v.size() && v[ptr] == ptr + 1) {
        ptr++;
        jhnda = !jhnda;
    }
    if (v[0] != 1) {
        return "Alice";
    } else if (ptr == v.size()) {
        return (jhnda ? "Bob" : "Alice");
    } else {
        return (jhnda ? "Alice" : "Bob");
    }
}

void kairvee() {
    int n;
    cin >> n;
    vector<int> arr = getInput(n);
    map<int, int> mp = countOccurrences(arr);
    vector<int> v;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        v.push_back(it->first);
    }
    cout << jeeta(v) << endl;
}

int main() {
    int tits;
    cin >> tits;
    while (tits--) {
        kairvee();
    }
    return 0;
}
