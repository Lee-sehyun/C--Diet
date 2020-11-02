#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //입력
    int t, n, cnt;

    cin >> t;


    // 시작해보자!
    for(int i = 0 ; i < t ; i++){
        cin >> n;
        int temp = sqrt(n);

        n -= temp*temp;
        cnt = 2*(temp-1);
        if(n != 0) cnt++;
        if(n > temp) cnt++;
        
        cout << cnt << endl;
        
    }


    return 0;
}