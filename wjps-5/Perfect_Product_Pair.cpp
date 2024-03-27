#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countGroups(vector<int>& nums) {
    int count = 0;
    unordered_map<int, int> productCount;

    // Calculate the product counts
    for (size_t i = 0; i < nums.size(); ++i) {
        for (size_t j = i + 1; j < nums.size(); ++j) {
            int product = nums[i] * nums[j];
            productCount[product]++;
        }
    }

    // Count the groups with four different people
    for (auto& pair : productCount) {
        int frequency = pair.second;
        count += frequency * (frequency - 1) / 2; // combinations of 'frequency' choose 2
    }

    return count * 8;
}

int main() {
    // Input
    vector<int> nums;
    int num;

    while (cin >> num) {
        nums.push_back(num);
        if (cin.get() == '\n')
            break;
    }

    // Calculate and output the number of possible groups
    int groups = countGroups(nums);
    cout <<groups << endl;

    return 0;
}
