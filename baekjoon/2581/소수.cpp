#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int M, N;

    cin >> M >> N;


    // 시작해보자!
    int sum = 0, min = 0;
    vector<int> prime;
    for(int i = 2 ; i <= N ; i++){
        int flag = 0;
        for(int j = 0 ; j < prime.size() ; j++){
            if(i%prime[j] == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            prime.push_back(i);
            if(i >= M){
                if(min == 0) min = i;
                sum += i;
            }
        }
    }

    if(sum == 0) cout << -1 << endl;
    else cout << sum << "\n" << min << endl;

    // for(int j = 0 ; j < prime.size() ; j++){
    //     cout << prime[j] << " ";
    // }


    return 0;
}