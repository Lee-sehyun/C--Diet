#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, M;

    cin >> N;

    vector<string> record(N);
    char front = '?', back = '?';

    for(int n = 0; n < N ; n++){
        cin >> record[n];
    }

    for(int n = 0; n < N ; n++){
        if(record[n] == "?"){
            if(n != 0){
                front = record[n-1][record[n-1].length()-1];
            }
            if(n != N-1){
                back = record[n+1][0];
            }
        }
    }

    cin >> M;
    string s;

    for(int m = 0 ; m < M ; m++){
        cin >> s;
        if(front == '?' && back == '?'){
            cout << s << endl;
            break;
        }
        else if(front == '?'){
            if(s[s.length()-1] == back && find(record.begin(), record.end(), s) == record.end()){
                cout << s << endl;
                break;
            }
        }
        else if(back == '?'){
            if(s[0] == front && find(record.begin(), record.end(), s) == record.end()){
                cout << s << endl;
                break;
            }
        }
        else{
            if(s[0] == front && s[s.length()-1] == back && find(record.begin(), record.end(), s) == record.end()){
                cout << s << endl;
                break;
            }
        }
    }
    

    return 0;
}