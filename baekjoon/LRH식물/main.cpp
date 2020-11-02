#include <iostream>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;

    int L, R;
    int cnt = 0;
    int arr[100001] = {0};
    int check;
    int count[N];


    // 시작해보자!
    for (int i = 0 ; i < N ; i++){
        cin >> L >> R;
        check = 0;
        cnt = 0;
        if (arr[L] == 1){
            cnt++;
            check++;
        }
        if (arr[R] == 1){
            cnt++;
            check++;
        }
        if (check < 2){
            for (int j = L+1 ; j < R ; j++){
                if (arr[j] == 0){
                    arr[j] = 1;
                }
            }
        }
        count[i] = cnt;
    }

    for (int i = 0 ; i < N ; i++){
        cout << count[i] << endl;
    }



    return 0;
}