#include <iostream>
using namespace std;
bool check[10001];
int main(){
    for(int i = 1 ; i <= 10000 ; i++){
        if(!check[i]) {
            cout << i << endl;
            for(int j = i ; j <= 10000 ; ){
                int k = j;
                while(k > 0){
                    j += k%10;
                    k /= 10;
                }
                check[j] = true;
            }
        }
    }
    return 0;
}