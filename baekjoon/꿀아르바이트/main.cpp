#include <iostream>

using namespace std;

int main(){

    //입력
    int n, m;

    cin >> n >> m;

    int T[n];

    for (int i = 0 ; i < n ; i++){
        cin >> T[i];
    }


    // 시작해보자!
    long long sum = 0;
    long long max;
    for (int i = 0 ; i < m ; i++){
        sum += T[i];
    }
    max = sum;

    for (int i = 0 ; i < n-m ; i++){
        sum = sum - T[i] + T[m+i];
        if (sum > max) max = sum;
    }

    cout << max << endl;
    


    return 0;
}