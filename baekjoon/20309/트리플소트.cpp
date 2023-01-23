#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, flag = 0;
    cin >> N;

    vector<int> arr(N);

    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < N ; i++){
        if((i%2==0 && arr[i]%2==0) || (i%2==1 && arr[i]%2==1)){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    

    return 0;
}