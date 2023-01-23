#include <iostream>
#include <string>

using namespace std;

int main(){

    //입력
    string str;
    int cnt = 0;

    getline(cin, str);
    // cout << str << endl;

    while(1){
        getline(cin, str);
        // cout << str << endl;
        if(str.compare("고무오리 디버깅 끝") == 0) break;
        else if(str.compare("문제") == 0) cnt++;
        else {
            if(cnt == 0) cnt += 2;
            else cnt--;
        }
    }
    if(cnt == 0) cout << "고무오리야 사랑해" << endl;
    else cout << "힝구" << endl;


    return 0;
}