#include <iostream>
#include <vector>

using namespace std;

int main(){

    //입력
    long long N;

    cin >> N;


    // 시작해보자!
    vector<int> one;
    while(N > 0){
        int i = N % 10;
        N /= 10;
        one.push_back(i);
    }

    if(one.size() == 1){
        cout << "NO" << endl;
    }
    else {
        for (int i = 0 ; i < one.size()-1 ; i++){
            int sum1 = 1;
            int sum2 = 1;
            for (int j = 0 ; j <= i ; j++){
                sum1 *= one[j];
            }
            for (int j = i+1 ; j < one.size() ; j++){
                sum2 *= one[j];
            }
            if (sum1 == sum2){
                cout << "YES" << endl;
                break;
            }
            else if(i == one.size()-2){
                cout << "NO" << endl;
            }
        }
    }


    return 0;
}