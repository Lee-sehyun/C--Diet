// 백준 2343번
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    // 입력
    long long N;
    long long M;

    cin >> N >> M;

    long long lesson[N];

    for (int i = 0 ; i < N ; i++){
        cin >> lesson[i];
    }

    // 코드 시작

    long long min = 0, max = N*10000;

    long long mid;
    int cnt = 1;
    while (min != max){
        mid = (max + min) / 2;
        for (int i = 0 ; i < N ; i++){
            if (cnt <= M){
                if ()
            }
        }
        if (sum >= M){
            min = index;
        }
        else{
            max = index-1;
        }
    }

    cout << max << endl;

    return 0;
}