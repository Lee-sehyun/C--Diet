#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    string P;
    int K;

    cin >> P >> K;

    vector<int> prime(K);
    for (int i = 0; i < K; i++)
    {
        prime[i] = 0;
    }

    // 시작해보자!
    long long carry = 1;
    int i;
    for (i = 2; i < K; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * 2; j < K; j += i)
            {
                prime[j] = 1;
            }
            carry = 0;
            for (int j = 0; j < P.length(); j++)
            {
                carry = (carry * 10 + (P[j] - '0')) % i;
            }
            if (carry == 0)
            {
                break;
            }
        }
    }
    if (carry == 0)
    {
        cout << "BAD " << i << endl;
    }
    else
    {
        cout << "GOOD" << endl;
    }

    return 0;
}