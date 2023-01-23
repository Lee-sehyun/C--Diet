#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, m, n, k;
    cin >> N;
    cin >> m >> n;
    vector<int> A(1);
    vector<int> B(1);
    vector<int> resultA(1000001);
    vector<int> resultB(1000001);

    // 시작해보자!
    cin >> A[0];
    for(int i = 1 ; i < m ; i++){
        cin >> k;
        A.push_back(A[i-1]+k);
    }
    cin >> B[0];
    for(int i = 1 ; i < n ; i++){
        cin >> k;
        B.push_back(B[i-1]+k);
    }
    int at, bt;
    for(int a1 = 0 ; a1 <= m ; a1++){
        for(int a2 = a1 ; a2 <= m ; a2++){
            for(int b1 = 0 ; b1 <= n ; b1++){
                for(int b2 = b1 ; b1 <= n ; b2++){
                    if(a1 != 0 && a2 != 0 && a1 == a2) continue;
                    else if(a2 == 0 && a1 != 0) continue;
                    else if(a1 == m) continue;
                    else {
                        at = 함수;
                    }
                    if(b1 != 0 && b2 != 0 && b1 == b2) continue;
                    else if(b2 == 0 && b1 != 0) continue;
                    else if(b1 == n) continue;
                    else {
                        bt = 함수;
                    }
                    result[at+bt]++;
                }
            }
        }
    }

    return 0;
}