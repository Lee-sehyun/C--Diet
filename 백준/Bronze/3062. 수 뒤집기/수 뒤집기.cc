#include <iostream>
#include <string>

using namespace std;

string YORN (int a);
int change (int a);

int main(){

    //입력
    int T;

    cin >> T;

    int t[T];

    for (int i = 0 ; i < T ; i++){
        cin >> t[i];
    }


    // 시작해보자!
    for (int i = 0 ; i < T ; i++){
        cout << YORN(t[i]) << endl;
    }


    return 0;
}

string YORN (int a){
    int sum = 0;

    sum = a + change(a);

    if (sum == change(sum)) return "YES";
    else return "NO";
}

int change (int a){
    int temp = 0;
    while (a > 0){
        temp = (temp*10) + (a%10);
        a = a/10;
    }
    return temp;
}