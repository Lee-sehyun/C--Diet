#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int T;
    cin >> T;

    // 시작해보자!
    vector<int> Tn;
    for (int i = 1;; i++)
    {
        if (i * (i + 1) / 2 > 1000)
            break;
        Tn.push_back(i * (i + 1) / 2);
    }
    for (int t = 0; t < T; t++)
    {
        int K, check = 0;
        cin >> K;
        for (int i = 0; i < Tn.size(); i++)
        {
            int N = K - Tn[i];
            if (N < 1 || check == 1)
                break;
            int left = 0, right = Tn.size() - 1;
            while (left <= right)
            {
                if (Tn[left] + Tn[right] == N)
                {
                    check = 1;
                    break;
                }
                else if (Tn[left] + Tn[right] > N)
                    right--;
                else
                    left++;
            }
        }
        cout << check << endl;
    }

    return 0;
}