#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    //입력
    int c;

    cin >> c;

    long long key_;
    long long max = 1;
    long long i = 0;
    long long k;
    int cnt;
    int count[c];
    int *cha = new int[10000000];
    char a[7];
    int max_ = 0;


    // 시작해보자!
    for (int v = 0 ; v < c ; v++){
        int key[7][2] = {0};
        int l = 0;
        max = 1;
        cin >> a;
        for (i = 0 ; i < 7 ; i++){
            if (a[i] == '0'){
                l++;
                max *= 10;
            }
            else break;
        }
        key_ = atoi(a);
        while (key_ > 0){
            key[l][0] = key_%10;
            if (max_ < key[l][0]){
                max_ = key[l][0];
            }
            key_ /= 10;
            max *= 10;
            l++;
        }
        max = (max/10)*(max_+1);
        // int cha[max];
        for (i = 2 ; i < max ; i++){
            if (i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0){
                if (i == 2 || i == 3 || i == 5 || i == 7){
                    cha[i] = 0;
                }
                else cha[i] = 1;
            }
            else cha[i] = 0;
        }
        cnt = 0;
        for (i = 2 ; i < max ; i++){
            if (cha[i] == 1){
                continue;
            }
            if(i > 10){
                for (long long j = i+i ; j < max ; j += i){
                    cha[j] = 1;
                }
            }
            for (int j = 0 ; j <= l ; j++){
                key[j][1] = 0;
            }
            key_ = i;
            while (key_ > 0){
                k = key_%10;
                key_ /= 10;
                for (int j = 0 ; j <= l ; j++){
                    if (k == key[j][0] && key[j][1] == 0){
                        key[j][1] = 1;
                        break;
                    }
                    else if (j == l){
                        key_ = -1;
                    }
                }
                if (key_ == 0){
                    cnt++;
                }
            }
        }
        count[v] = cnt;
    }

    for (i = 0 ; i < c ; i++){
        cout << count[i] << endl;
    }

    delete[] cha;


    return 0;
}