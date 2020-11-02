#include <iostream>

using namespace std;

void quick_sort(int [], int [], int left, int right);

int main(){

    //입력
    int n, m;
    float m_;

    // 시작해보자!
    while(true){
        long long max[10001] = {0};
        long long temp_max;
        cin >> n >> m_;
        m = m_*100;
        if (n == 0 && m_ == 0){
            break;
        }
        int cal[n], price[n];
        for (int i = 0 ; i < n ; i++){
            cin >> cal[i] >> m_;
            price[i] = m_*100;
        }
        quick_sort(price, cal, 0, n-1);
        for (int i = price[0] ; i <= m ; i++){
            for (int j = 0 ; j < n ; j++){
                if (i < price[j]){
                    break;
                }
                else {
                    temp_max = max[i-price[j]] + cal[j];
                    if (temp_max > max[i]){
                        max[i] = temp_max;
                    }
                }
            }
        }
        cout << max[m] << endl;

    }


    return 0;
}

void quick_sort(int a[], int b[], int left, int right){
    int pivot = left;
    int i = left+1;
    int j = right;
    int temp_a, temp_b;

    if (left < right){
        while(i <= j){
            if (a[i] <= a[pivot]){
                i++;
            }
            else if (a[j] > a[pivot]){
                j--;
            }
            else {
                temp_a = a[i];
                a[i] = a[j];
                a[j] = temp_a;
                temp_b = b[i];
                b[i] = b[j];
                b[j] = temp_b;
            }
        }
        temp_a = a[pivot];
        a[pivot] = a[j];
        a[j] = temp_a;
        temp_b = b[pivot];
        b[pivot] = b[j];
        b[j] = temp_b;
        quick_sort(a, b, left, j-1);
        quick_sort(a, b, j+1, right);
    }
}