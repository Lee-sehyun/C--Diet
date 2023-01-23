#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int N;

    cin >> N;

    // 시작해보자!
    long long sum = 0, odd = 0;
    for (int i = N; i > 0; i--)
    {
        if (odd % 2 == 0)
        {
            sum += i * (i + 1) / 2;
        }
        else
        {
            sum += i * (i + 1);
        }
        odd++;
    }
    cout << sum << endl;

    return 0;
}