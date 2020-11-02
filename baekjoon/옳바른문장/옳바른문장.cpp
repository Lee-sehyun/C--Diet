#include <string>
#include <vector>

using namespace std;

string solution(string p) {
    string answer = "";
    if(p.length() == 0) return answer;
    int cnt = 0, check = 0;
    string u, v;
    for(int i = 0 ; i < p.length() ; i++){
        if(p[i] == '(') cnt++;
        else cnt--;
        if(cnt < 0) check = 1;
        else if(cnt == 0){
            u = p.substr(0, i+1);
            v = p.substr(i+1, p.length()-i-1);
            break;
        }
        if(i == p.length()-1){
            u = p.substr(0, i+1);
            v = "";
        }
    }
    if(check == 1){
        answer += "(";
        answer += solution(v);
        answer += ")";
        for(int i = 1 ; i < u.length()-1 ; i++){
            if(u[i] == '(') answer += ")";
            else answer += "(";
        }
    }
    else answer += u + solution(v);
    return answer;
}