#include <iostream>

using namespace std;

int main(){

    //입력
    int N, L, length[1001] = {0}, cnt = 0;;
    cin >> N >> L;

    int R[N], G[N], k;
    for(int i = 0 ; i < N ; i++){
        cin >> k >> R[i] >> G[i];
        length[k] = i+1;
    }

    // 시작해보자!
    for(int i = 0 ; i < L ; i++){
        if(length[i] == 0) cnt++;
        else {
            k = (cnt % (R[length[i]-1] + G[length[i]-1])) - R[length[i]-1];
            if(k < 0) cnt += 1-k;
            else cnt++;
        }
    }
    
    cout << cnt << endl;

    return 0;
}