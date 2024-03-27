#include <iostream>
#include <vector>

using namespace std;



int up = 0;

void dfs(vector<vector<int>>& grid, int row, int col, int ec) {
    int rows = grid.size();
    int cols = grid[0].size();

    
    if (row < 0 || row >= rows || col < 0 || col >= cols || grid[row][col] == BLOCKED) {
        return;
    }

   
    if (grid[row][col] == EXIT && ec == 0) {
        up++;
        return;
    }

   
    int ov = grid[row][col];
    grid[row][col] = BLOCKED;

    if (ov == EMPTY) {
        ec--;
    }
    dfs(grid, row + 1, col, ec);
    dfs(grid, row - 1, col, ec);
    dfs(grid, row, col + 1, ec);
    dfs(grid, row, col - 1, ec);

   
    grid[row][col] = ov;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> grid(rows, vector<int>(cols));
    int sr = -1, sc = -1;
    int ec = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == START) {
                sr = i;
                sc = j;
            } else if (grid[i][j] == EMPTY) {
                ec++;
            }
        }
    }

 
    dfs(grid, sr, sc, ec);

    cout <<  up << endl;

    return 0;
}
