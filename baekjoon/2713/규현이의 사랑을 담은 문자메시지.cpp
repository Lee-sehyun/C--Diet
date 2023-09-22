#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int T;


    cin >> T;

    int R, C;
    string messages;

    for(int t = 0 ; t < T ; t++){
        cin >> R >> C;
        getline(cin, messages);
        messages = messages.substr(1);

        vector<vector<int>> order(R, vector<int>(C, -1));

        int i = 0, j = 0, direction = 0;

        for(int s = 0 ; s < messages.size() ; s++){
            bitset<5> texts;
            if(messages[s] == ' '){
                texts = bitset<5>(0);
            }
            else {
                texts = bitset<5>(messages[s] - 'A' + 1);
            }
            
            for(int text = 4 ; text >=0 ; text--){
                if(direction == 0){
                    order[i][j] = texts[text];
                    if(j+1 == C || order[i][j+1] != -1){
                        direction = 1;
                        i++;
                    }
                    else {
                        j++;
                    }
                }
                else if(direction == 1){
                    order[i][j] = texts[text];
                    if(i+1 == R || order[i+1][j] != -1){
                        direction = 2;
                        j--;
                    }
                    else {
                        i++;
                    }
                }
                else if(direction == 2){
                    order[i][j] = texts[text];
                    if(j-1 == -1 || order[i][j-1] != -1){
                        direction = 3;
                        i--;
                    }
                    else {
                        j--;
                    }
                }
                else {
                    order[i][j] = texts[text];
                    if(i-1 == -1 || order[i-1][j] != -1){
                        direction = 0;
                        j++;
                    }
                    else {
                        i--;
                    }
                }
            }
        }

        for(int i = 0 ; i < R ; i++){
            for(int j = 0 ; j < C ; j++){
                if(order[i][j] == -1) cout << 0;
                else cout << order[i][j];
            }
        }
        cout << endl;
    }

    

    return 0;
}