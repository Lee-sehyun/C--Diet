#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int n, i = 1, t;
    stack<int> s;
    vector<char> temp;

    cin >> n;


    // 시작해보자!
    for(int j = 0 ; j < n ; j++){
        cin >> t;
        while(i <= t){
            s.push(i);
            temp.push_back('+');
            i++;
        }
        if(s.top() != t){
            cout << "NO" << "\n";
            return 0;
        }
        s.pop();
        temp.push_back('-');
    }
    for(int i = 0 ; i < 2*n ; i++){
        cout << temp[i] << "\n";
    }


    return 0;
}