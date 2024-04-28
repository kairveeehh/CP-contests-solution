class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& kv) {
        int n = kv.size();
        int m = kv[0].size();
        vector<int> rc(n), cc(m);

        // Count the occurrences of 1's in each row and column
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (kv[i][j] == 1) {
                    rc[i]++;
                    cc[j]++;
                }
            }
        }

        long long trigles = 0;
        // For each cell with 1, calculate the number of right triangles
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (kv[i][j] == 1) {
                    trigles += (rc[i] - 1) * (cc[j] - 1);
                }
            }
        }

        return trigles;
    }
};
