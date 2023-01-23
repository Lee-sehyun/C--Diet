#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int N;

    cin >> N;

    // 시작해보자!
    int sum = 0;
    for (int i = 5; i <= N; i += 5)
    {
        int k = i / 5;
        while (k % 5 == 0)
        {
            sum++;
            k /= 5;
        }
        sum++;
    }
    cout << sum << endl;

    return 0;
}