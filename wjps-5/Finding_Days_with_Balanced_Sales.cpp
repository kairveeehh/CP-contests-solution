#include<bits/stdc++.h>
using namespace std;

vector<int> findSlowSaleDays(const vector<vector<int>>& data) {
    vector<int> slowSaleDays;
    int numCategories = data[0].size();

    for (int i = 0; i < data.size(); ++i) {
        int totalSales = accumulate(data[i].begin(), data[i].end(), 0);

        if (totalSales <= ceil(0.5 * numCategories)) {
            slowSaleDays.push_back(i);
        }
    }

    return slowSaleDays;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> data(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> data[i][j];
        }
    }

    vector<int> slowSaleDays = findSlowSaleDays(data);

    // Print the indices in ascending order
    if (slowSaleDays.empty()) {
        cout << "[]" << endl;
    } else {
        for (int index : slowSaleDays) {
            cout << index << " ";
        }
        cout << endl;
    }

    return 0;
}