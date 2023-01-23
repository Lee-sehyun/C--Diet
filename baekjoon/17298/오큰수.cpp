#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int N;

    cin >> N;

    vector<int> arr(N);
    stack<int> idx;

    // 시작해보자!
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        while (!idx.empty())
        {
            if (arr[idx.top()] < arr[i])
            {
                arr[idx.top()] = arr[i];
                idx.pop();
            }
            else
            {
                idx.push(i);
                break;
            }
        }
        if (idx.empty())
            idx.push(i);
    }
    while (!idx.empty())
    {
        arr[idx.top()] = -1;
        idx.pop();
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}