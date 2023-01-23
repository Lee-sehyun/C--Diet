#include <bits/stdc++.h>

using namespace std;

int stack_size = 0;
int s[10000];
void push(int x);
int pop();
int size();
int top();
int empty();

int main(){

    //입력
    int N;
    string str;

    cin >> N;


    // 시작해보자!
    for(int i = 0 ; i < N ; i++){
        cin >> str;
        if(str == "push"){
            int x;
            cin >> x;
            push(x);
        }
        else if(str == "pop"){
            cout << pop() << "\n";
        }
        else if(str == "size"){
            cout << size() << "\n";
        }
        else if(str == "empty"){
            cout << empty() << "\n";
        }
        else if(str == "top"){
            cout << top() << "\n";
        }
    }


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