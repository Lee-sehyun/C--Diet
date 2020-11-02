#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.length();
    int l = s.length();
    for(int i = 1 ; i <= l ; i++){
        int pos = i;
        string k = s.substr(0, i);
        int cnt = 1;
        int count = 0;
        while(pos < l){
            string temp = s.substr(pos, i);
            if(k.compare(temp) == 0){
                cnt++;
            }
            else {
                if(cnt > 1){
                    while(cnt > 0){
                        count++;
                        cnt /= 10;
                    }
                }
                count += k.length();
                k = temp;
                cnt = 1;
            }
            pos += i;
        }
        if(cnt > 1){
            while(cnt > 0){
                count++;
                cnt /= 10;
            }
        }
        count += k.length();
        if(count < answer) answer = count;
    }
    return answer;
}