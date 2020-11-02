#include <iostream>
#include <cstdlib>

using namespace std;

void sort(int a[], int left, int right);

int main(){

    //입력
    int P, Q, Py, Qy; // P,Q의 갯수와 y좌표 

    cin >> P >> Q;
    int Px[P], Qx[Q]; // x좌표 
    cin >> Py >> Qy;

    for(int i = 0 ; i < P ; i++){
        cin >> Px[i];
    }
    for(int i = 0 ; i < Q ; i++){
        cin >> Qx[i];
    }

    sort(Px, 0, P-1);
    sort(Qx, 0, Q-1);

    // 시작해보자!
    int y = abs(Py - Qy); // y값.

    int i = 0, j = 0; // 배열의 인덱스 
    int cnt = 0;
    int min = abs(Px[0] - Qx[0]);
    int temp;

    while(i < P && j < Q){
        temp = abs(Px[i] - Qx[j]);
        if(temp < min) {
            min = temp;
            cnt = 1;
        }
        else if (temp == min) cnt++;

        if(Px[i] <= Qx[j]) i++;
        else j++;
    }

    cout << y+min << " " << cnt << endl;
    


    return 0;
}

void sort(int a[], int left, int right){
    int pivot = (left+right)/2;
    int i = left+1;
    int j = right;
    int temp;

    if (left < right){
        temp = a[left];
        a[left] = a[pivot];
        a[pivot] = temp;
        pivot = left;
        while(i <= j){
            if (a[i] <= a[pivot]){
                i++;
            }
            else if (a[j] > a[pivot]){
                j--;
            }
            else {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        sort(a, left, j-1);
        sort(a, j+1, right);
    }
}