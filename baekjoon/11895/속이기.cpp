#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int n;
    cin >> n;
    int sum = 0, min, p;
    bitset<20> ans(0);
    // cout << ans << endl;

    for(int i = 0 ; i < n ; i++){
        cin >> p;
        sum += p;
        if(i == 0){
            min = p;
        }
        else {
            if(min > p){
                min = p;
            }
        }
        ans = ans ^ bitset<20>(p);
    }
    if(ans == bitset<20>(0)){
        cout << sum - min << endl;
    }
    else {
        cout << 0 << endl;
    }
    

    return 0;
}