// 백준 2805번
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    // 입력
    long long N;
    long long M;

    cin >> N >> M;

    long long tree[N];

    for (int i = 0 ; i < N ; i++){
        cin >> tree[i];
    }

    // 코드 시작

    long long min = 0, max = tree[0];
    for (int i = 1 ; i < N ; i++){
        if (max < tree[i]){
            max = tree[i];
        }
    }

    long long index;
    long long sum;
    while (min != max){
        index = (max + min) / 2 + 1;
        sum = 0;
        for (int i = 0 ; i < N ; i++){
            if (tree[i] > index){
                sum = sum + (tree[i] - index);
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