#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    //입력
    int X;
    vector<int> v;

    cin >> X;


    // 시작해보자!
    int K = X%10;
    X /= 10;
    while(X > 0){
        if(K <= X%10){
            v.push_back(K);
            K = X%10;
            X /= 10;
        }
        else {
            v.push_back(K);
            K = X%10;
            X /= 10;
            sort(v.begin(), v.end());
            for(int i = 0 ; i < v.size() ; i++){
                if(K < v[i]){
                    X *= 10;
                    X += v[i];
                    v[i] = K;
                    break;
                }
            }
            for(int i = 0 ; i < v.size() ; i++){
                X *= 10;
                X += v[i];
            }
            break;
        }
    }

    cout << X << endl;


    return 0;
}