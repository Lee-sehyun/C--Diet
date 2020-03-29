#include <iostream>

using namespace std;

int main(){

    //입력
    int n;

    cin >> n;

    long long x[n];

    for (int i = 0 ; i < n ; i++){
        cin >> x[i];
    }


    // 시작해보자!
    long long sum;

    for (int i = 0 ; i < n ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (x[i] >= x[j]) sum += x[i]-x[j];
            else sum += x[j] - x[i];
        }
    }

    cout << sum*2;


    return 0;
}