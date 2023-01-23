#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, M, k;
    cin >> N >> M;
    vector<int> bead(1);
    vector<int> s(M);
    for(int i = 1 ; i <= N ; i++){
        cin >> k;
        bead.push_back(bead[i-1]+k);
    }
    k = (N%M == 0)? N/M : N/M+1;
    for(int i = 1 ; i < M ; i++){
        s[i] = s[i-1] + k;
    }
    s.push_back(N);
    int max = 0;
    while(1){
        max = 0;
        int a, b;
        for(int i = 0 ; i < M ; i++){
            if(max < bead[s[i+1]] - bead[s[i]]){
                max = bead[s[i+1]] - bead[s[i]];
                a = i;
                b = i+1;
            }
        }
        int temp;
        if(b == M) temp = a;
        else if(a == 0) temp = b;
        else {
            if(bead[s[a]] - bead[s[a-1]] < bead[s[b+1]] - bead[s[b]]) temp = a;
            else temp = b;
        }
        if(temp == a){
            if(max >= bead[s[a]+1] - bead[s[a-1]]) s[a]++;
            else break;
        }
        else {
            if(max >= bead[s[b+1]] - bead[s[b]-1]) s[b]--;
            else break;
        }
    }

    cout << max << endl;
    for(int i = 1 ; i <= M ; i++){
        cout << s[i]-s[i-1] << " ";
    }
    


    return 0;
}