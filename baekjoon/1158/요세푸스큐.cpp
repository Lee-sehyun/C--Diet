#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, K;
    cin >> N >> K;
    queue<int> q;

    for(int i = 1 ; i <= N ; i++){
        q.push(i);
    }
    cout << "<";
    while(q.size() > 0){
        for(int i = 0 ; i < K-1 ; i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int temp = q.front();
        q.pop();
        cout << temp;
        if(q.size() > 0) cout << ", ";
        else cout << ">";
    }

    return 0;
}