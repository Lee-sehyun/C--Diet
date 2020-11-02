#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //입력
    int n;
    cin >> n;
    int a[n], cnt = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    // 시작해보자!
    for(int i = 2 ; i <= n ; i++){
        int zero = 0;
        for(int j = 0 ; j < i ; j++){
            zero += a[j];
        }
        for(int j = 0 ; j+i < n ; j++){
            if(zero == 0){
                cnt++;
                zero = a[j+i-1];
                for(int k = 0 ; k < )
            }
        }
    }
    


    return 0;
}