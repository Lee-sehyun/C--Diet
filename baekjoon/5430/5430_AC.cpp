#include <bits/stdc++.h>

using namespace std;

vector<int> split(string input, char delimiter);

int main(){

    //입력
    int T;

    cin >> T;
    for (int t = 0 ; t < T ; t++){
        string p, str;
        int n;
        cin >> p >> n >> str;
        str = str.substr(1, str.size()-2);
        vector<int> X = split(str, ',');
        int cursor = 0, D = 1;
        int i = 0, j = X.size()-1;

        for(int c = 0 ; c < p.size() ; c++){
            if(p[c] == 'R'){
                if(cursor == i) {
                    cursor = j;
                    D = -1;
                }
                else {
                    cursor = i;
                    D = 1;
                }
            }
            else {
                if(i > j){
                    cursor = -2;
                    break;
                }
                if(cursor == i) {
                    i++;
                    cursor++;
                }
                else {
                    j--;
                    cursor--;
                }
            }
        }
        if(cursor == -2){
            cout << "error" << endl;
        }
        else {
            cout << "[";
            for(int k = 0 ; k < j-i ; k++,cursor+=D){
                cout << X[cursor] << ",";
            }
            if(i <= j){
                cout << X[cursor];
            }
            cout << "]" << endl;
        }
    }
    
    


    return 0;
}

vector<int> split(string input, char delimiter) {
    vector<int> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(stoi(temp));
    }
 
    return answer;
}