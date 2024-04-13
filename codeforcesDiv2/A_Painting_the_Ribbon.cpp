#include <iostream>

using namespace std;
#define long long int
// Function to check if the conditions are met
bool solve(int n, int m, int k) {
    return (n - (n / m + (n % m != 0)) <= k);
}

int main() {
    int t; // Number of test cases

    cin >> t; // Read the number of test cases

    while (t--) {
        int n, m, k; // Variables for the problem

        cin >> n >> m >> k; // Read the three integer values

        // Check conditions using the function
        if (solve(n, m, k)) {
            cout << "NO" << endl; // Print NO if conditions met
        } else {
            cout << "YES" << endl; // Otherwise, print YES
        }
    }

    return 0; // Indicate successful program termination
}
