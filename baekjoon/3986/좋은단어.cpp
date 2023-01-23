#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;

    string word;
    stack<char> s;
    int cnt = 0;
    for(int i = 0 ; i < N ; i++){
        cin >> word;
        while(!s.empty()) s.pop();
        for(int j = 0 ; j < word.length() ; j++){
            if(s.empty()) s.push(word[j]);
            else if(s.top() != word[j]) s.push(word[j]);
            else s.pop();
        }
        if(s.empty()) cnt++;
    }

    cout << cnt << endl;




    return 0;
}