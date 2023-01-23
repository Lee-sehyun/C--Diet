#include <bits/stdc++.h>

using namespace std;

int stack_size = 0;
int s[100000];
void push(int x);
int pop();
int size();
int top();
int empty();

int main(){

    //입력
    int K, k, sum = 0;

    cin >> K;


    // 시작해보자!
    for(int i = 0 ; i < K ; i++){
        cin >> k;
        if(k == 0) pop();
        else push(k);
    }
    while(!empty()){
        sum += pop();
    }

    cout << sum << "\n";


    return 0;
}

void push(int x){
    s[stack_size++] = x;
}
int pop(){
    if(empty()) return -1;
    return s[--stack_size];
}
int size(){
    return stack_size;
}
int top(){
    if(empty()) return -1;
    return s[stack_size-1];
}
int empty(){
    if(stack_size == 0) return 1;
    else return 0;
}