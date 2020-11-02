#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    //입력
    int n, k;
    string s, t;
    int m;
    int ans = 0;

    cin >> n >> k;
    cin >> s >> t;

    // 시작해보자!
    if(n%2 == 0) m = n/2;
    else m = n/2+1;
    
    for(int i = 0 ; i < m ; i++){
        // 앞부분
        if(s[i] != t[0] && s[i] != t[1]){
            int front = 0, back = 0;
            for(int j = i-1 ; j >= 0 ; j--){
                if(s[j] == t[0]) front++;
            }
            for(int j = i+1 ; j < n ; j++){
                if(s[j] == t[1]) back++;
            }
            if(front > back){
                s[i] = t[1];
            }
            else {
                s[i] = t[0];
            }
            k--;
        }

        // 확인
        if(k == 0) break;

        // 뒷부분
        if(s[n-1-i] != t[0] && s[n-1-i] != t[1]){
            int front = 0, back = 0;
            for(int j = n-1-i-1 ; j >= 0 ; j--){
                if(s[j] == t[0]) front++;
            }
            for(int j = n-1-i+1 ; j < n ; j++){
                if(s[j] == t[1]) back++;
            }
            if(front > back){
                s[n-1-i] = t[1];
            }
            else {
                s[n-1-i] = t[0];
            }
            k--;
        }

        // 확인
        if(k == 0) break;
    }

    int back = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == t[1]) back++;
    }

    for(int i = 0 ; i < n ; i++){
        if(s[i] == t[1]) back--;
        if(s[i] == t[0]) ans += back;
    }

    cout << ans << endl;


    return 0;
}