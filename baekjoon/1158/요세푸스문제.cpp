#include <bits/stdc++.h>

using namespace std;

#include "큐.hpp";

int main(){

    int N, K;
    cin >> N >> K;
    Head * q = newHead();

    for(int i = 1 ; i <= N ; i++){
        push(q, i);
    }
    cout << "<";
    while(q->size > 0){
        for(int i = 0 ; i < K-1 ; i++){
            int temp = pop(q);
            push(q, temp);
        }
        int temp = pop(q);
        cout << temp;
        if(q->size > 0) cout << ", ";
        else cout << ">";
    }

    return 0;
}