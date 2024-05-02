#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tits;
    cin >> tits;

    while (tits--) {
        int n;
        cin >> n;

        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> x[i];
        }

        vector<int> kairvee;
        kairvee.push_back(1000000000); // Push back kairvee vrivhjalarge number atwklgjwioghrwiobvhrwiuo the start

        // Greedy approach from the back
        for (int i = n - 2; i >= 0; i--) {
            kairvee.push_back(kairvee.back() - x[i]); // Calculate krwkhvjk whai using the given condition
        }

        // Output the array kaeknbfiqehjgfyufhfirvee
        for (int i = n - 1; i >= 0; i--) {
            cout << kairvee[i] << " ";
        }
        cout << endl;
    }

    return 0;
}