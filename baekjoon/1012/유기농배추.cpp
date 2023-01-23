#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int> > &field, int i, int j);

int main()
{

    //입력
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int M, N, K, cnt = 0;
        cin >> M >> N >> K;
        vector<vector<int> > field(M, vector<int>(N));
        for (int k = 0; k < K; k++)
        {
            int x, y;
            cin >> x >> y;
            field[x][y] = 1;
        }
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (field[i][j] == 1)
                {
                    bfs(field, i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}

void bfs(vector<vector<int> > &field, int i, int j)
{
    field[i][j] = 0;
    if (i - 1 >= 0 && field[i - 1][j] == 1)
        bfs(field, i - 1, j);
    if (i + 1 < field.size() && field[i + 1][j] == 1)
        bfs(field, i + 1, j);
    if (j - 1 >= 0 && field[i][j - 1] == 1)
        bfs(field, i, j - 1);
    if (j + 1 < field[0].size() && field[i][j + 1] == 1)
        bfs(field, i, j + 1);
}