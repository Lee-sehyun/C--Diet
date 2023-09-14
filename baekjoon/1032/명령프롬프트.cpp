#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int N;
    string str, result;

    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> str;
        if(i == 0){
            result = str;
        }
        else{
            for(int c = 0 ; c < str.length() ; c++){
                if(result[c] != str[c]){
                    result[c] = '?';
                }
            }
        }
    }
    
    cout << result << endl;

    return 0;
}