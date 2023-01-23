#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int t, n;

    cin >> t;

    for (int T = 0 ; T < t ; T++){
        cin >> n;
        long long cnt = 0;
        vector<string> pair;
        vector<int> count;
        string temp;
        for (int N = 0 ; N < n ; N++){
            cin >> temp;
            int i = 0;
            for(i = 0 ; i < pair.size() ; i++){
                if(pair[i] == temp){
                    count[i]++;
                    break;
                }
            }
            if(i == pair.size()){
                pair.push_back(temp);
                count.push_back(1);
            }
        }
        for(int i = 0 ; i < pair.size() ; i++){
            for (int j = i+1 ; j < pair.size() ; j++){
                if((pair[i][0] == pair[j][0] && pair[i][1] != pair[j][1])||(pair[i][0] != pair[j][0] && pair[i][1] == pair[j][1])){
                    cnt += count[i]*count[j];
                }
            }
        }
        cout << cnt << endl;
    }
    

    return 0;
}