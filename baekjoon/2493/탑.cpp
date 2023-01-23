#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, temp, j = 1;

    cin >> N;
    stack<int> t;
    stack<int> s;
    vector<int> lazer(N);


    // 시작해보자!
    for(int i = 0 ; i < N ; i++){
        cin >> temp;
        while(!s.empty() && s.top() < temp){
            s.pop();
            t.pop();
        }
        if(s.empty()){
            lazer[i] = 0;
            s.push(temp);
            t.push(i+1);
        }
        else {
            lazer[i] = t.top();
            s.push(temp);
            t.push(i+1);
        }
    }

    for(int i = 0 ; i < N ; i++){
        cout << lazer[i] << " ";
    }


    return 0;
}