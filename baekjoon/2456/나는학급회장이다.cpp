#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, a, b, c;
    vector<int> max(3), first(2), second(2), third(2);

    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> a >> b >> c;
        max[0] += a;
        max[1] += b;
        max[2] += c;
        if(a == 3) first[0]++;
        else if(a == 2) first[1]++;
        if(b == 3) second[0]++;
        else if(b == 2) second[1]++;
        if(c == 3) third[0]++;
        else if(c == 2) third[1]++;
    }

    if(max[0] > max[1] && max[0] > max[2]){
        cout << 1 << " " << max[0] << endl;
    }
    else if(max[1] > max[0] && max[1] > max[2]){
        cout << 2 << " " << max[1] << endl;
    }
    else if(max[2] > max[1] && max[2] > max[0]){
        cout << 3 << " " << max[2] << endl;
    }
    else if(max[0] == max[1] && max[1] == max[2]){
        if(first[0] > second[0] && first[0] > third[0]){
            cout << 1 << " " << max[0] << endl;
        }
        else if(second[0] > first[0] && second[0] > third[0]){
            cout << 2 << " " << max[1] << endl;
        }
        else if(third[0] > first[0] && third[0] > second[0]){
            cout << 3 << " " << max[2] << endl;
        }
        else if(first[0] == second[0] && second[0] == third[0]){
            if(first[1] > second[1] && first[1] > third[1]){
                cout << 1 << " " << max[0] << endl;
            }
            else if(second[1] > first[1] && second[1] > third[1]){
                cout << 2 << " " << max[1] << endl;
            }
            else if(third[1] > first[1] && third[1] > second[1]){
                cout << 3 << " " << max[2] << endl;
            }
            else {
                cout << 0 << " " << max[0] << endl;
            }
        }
        else if(first[0] == second[0]){
            if(first[1] > second[1]){
                cout << 1 << " " << max[0] << endl;
            }
            else if(second[1] > first[1]){
                cout << 2 << " " << max[1] << endl;
            }
            else {
                cout << 0 << " " << max[0] << endl;
            }
        }
        else if(first[0] == third[0]){
            if(first[1] > third[1]){
                cout << 1 << " " << max[0] << endl;
            }
            else if(third[1] > first[1]){
                cout << 3 << " " << max[2] << endl;
            }
            else {
                cout << 0 << " " << max[0] << endl;
            }
        }
        else if(second[0] == third[0]){
            if(second[1] > third[1]){
                cout << 2 << " " << max[1] << endl;
            }
            else if(third[1] > second[1]){
                cout << 3 << " " << max[2] << endl;
            }
            else {
                cout << 0 << " " << max[1] << endl;
            }
        }
    }
    else if(max[0] == max[1]){
        if(first[0] > second[0]){
            cout << 1 << " " << max[0] << endl;
        }
        else if(second[0] > first[0]){
            cout << 2 << " " << max[1] << endl;
        }
        else {
            if(first[1] > second[1]){
                cout << 1 << " " << max[0] << endl;
            }
            else if(second[1] > first[1]){
                cout << 2 << " " << max[1] << endl;
            }
            else {
                cout << 0 << " " << max[0] << endl;
            }
        }
    }
    else if(max[0] == max[2]){
        if(first[0] > third[0]){
            cout << 1 << " " << max[0] << endl;
        }
        else if(third[0] > first[0]){
            cout << 3 << " " << max[2] << endl;
        }
        else {
            if(first[1] > third[1]){
                cout << 1 << " " << max[0] << endl;
            }
            else if(third[1] > first[1]){
                cout << 3 << " " << max[2] << endl;
            }
            else {
                cout << 0 << " " << max[0] << endl;
            }
        }
    }
    else if(max[1] == max[2]){
        if(second[0] > third[0]){
            cout << 2 << " " << max[1] << endl;
        }
        else if(third[0] > second[0]){
            cout << 3 << " " << max[2] << endl;
        }
        else {
            if(second[1] > third[1]){
                cout << 2 << " " << max[1] << endl;
            }
            else if(third[1] > second[1]){
                cout << 3 << " " << max[2] << endl;
            }
            else {
                cout << 0 << " " << max[1] << endl;
            }
        }
    }


    return 0;
}