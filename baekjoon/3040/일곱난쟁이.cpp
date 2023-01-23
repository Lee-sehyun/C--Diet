#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){

    //입력
    set<int> N;
    int sum = 0;
    int k;

    for(int i = 0 ; i < 9 ; i++){
        cin >> k;
        N.insert(k);
        sum += k;
    }

    // 시작해보자!
    sum -= 100;
    auto a = N.begin(), b = N.end();
    b--;
    while(1){
        if((*a)+(*b) == sum) break;
        else if((*a)+(*b) < sum) a++;
        else b--;
    }

    for(auto i = N.begin() ; i != N.end() ; i++){
        if(i != a && i != b) cout << *i << endl;
    }



    return 0;
}