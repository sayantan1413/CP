#include "stdc++.h"

using namespace std;

bool isValid(int row, int col) {
    return row >= 1 && row <= 8 && col >= 1 && col <= 8;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int startRow, startCol, k;
        cin >> startRow >> startCol >> k;
        queue<pair<int, int> > q;
        pair<int,int> p = make_pair(startRow, startCol);
        q.push(p);
        int visited[9][9], moves[9][9];
        for(int i=1;i<=8;++i) {
            for(int j=1;j<=8;++j) {
                visited[i][j] = 0;
                moves[i][j] = 0;
            }
        }

        int xMoves[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int yMoves[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        while(!q.empty()) {
            pair<int, int> curr = q.front();
            q.pop();
            int currRow = curr.first;
            int currCol = curr.second;
            visited[currRow][currCol] = 1;
            for(int i=0;i<8;i++) {
                int nextRow = currRow + xMoves[i];
                int nextCol = currCol + yMoves[i];
                if(isValid(nextRow, nextCol) && visited[nextRow][nextCol] == 0) {
                    q.push(make_pair(nextRow, nextCol));
                    visited[nextRow][nextCol] = 1;
                    moves[nextRow][nextCol] = moves[currRow][currCol] + 1;
                }
            }
        }
        int count = 0;
        for(int i=1;i<=8;++i) {
            for(int j=1;j<=8;++j) {
                if(moves[i][j] <= k) {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
}