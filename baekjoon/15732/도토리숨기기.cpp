#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int N, K, D;

    cin >> N >> K >> D;
    vector<vector<int> > box(K, vector<int>(3));
    for (int i = 0; i < K; i++)
    {
        cin >> box[i][0] >> box[i][1] >> box[i][2];
    }

    // 시작해보자!
    int left = 0, right = N, mid;
    long long sum = 0;
    while (left < right)
    {
        mid = (left + right) / 2;
        sum = 0;
        for (int i = 0; i < K; i++)
        {
            if (mid >= box[i][1])
            {
                sum += (box[i][1] - box[i][0]) / box[i][2] + 1;
            }
            else if (mid >= box[i][0])
            {
                sum += (mid - box[i][0]) / box[i][2] + 1;
            }
        }
        if (sum >= D)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << right << endl;

    return 0;
}