#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int N;

    cin >> N;

    vector<vector<int> > inning(N, vector<int>(9));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 9; j++)
            cin >> inning[i][j];
    }
    int score[9] = {0}, batting[9], lou[3] = {0};
    for (int i = 0; i < 9; i++)
    {
        batting[i] = i;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int out = 0;
            for (int k = 0; k < 3; k++)
            {
                lou[k] = 0;
            }
            while (out < 3)
            {
                if (inning[i][batting[j]] == 0)
                {
                    out++;
                }
                else if (inning[i][batting[j]] == 1)
                {
                    if (lou[2] == 1)
                    {
                        score[j]++;
                        lou[2] = 0;
                    }
                    for (int k = 1; k >= 0; k--)
                    {
                        if (lou[k] == 1)
                        {
                            lou[k] = 0;
                            lou[k + 1] = 1;
                        }
                    }
                    lou[0] = 1;
                }
                else if (inning[i][batting[j]] == 2)
                {
                    for (int k = 2; k >= 1; k--)
                    {
                        if (lou[k] == 1)
                        {
                            lou[k] = 0;
                            score[j]++;
                        }
                    }
                    if (lou[0] == 1)
                    {
                        lou[0] = 0;
                        lou[2] = 1;
                    }
                    lou[1] = 1;
                }
                else if (inning[i][batting[j]] == 3)
                {
                    for (int k = 2; k >= 0; k--)
                    {
                        if (lou[k] == 1)
                        {
                            lou[k] = 0;
                            score[j]++;
                        }
                    }
                    lou[2] = 1;
                }
                else
                {
                    for (int k = 2; k >= 0; k--)
                    {
                        if (lou[k] == 1)
                        {
                            lou[k] = 0;
                            score[j]++;
                        }
                    }
                    score[j]++;
                }
                batting[j]++;
                if (batting[j] == 9)
                    batting[j] = 0;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < 9; i++)
    {
        if (max < score[i])
            max = score[i];
    }
    cout << max << endl;

    return 0;
}