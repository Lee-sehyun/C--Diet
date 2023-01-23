#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
    int T;
    cin >> T;
    vector<int> result(10);

    for(int t = 0 ; t < T ; t++){
        int N;
        cin >> N;
        int cnt = N;

        vector<vector<string>> arr(N, vector<string>(4));
        vector<bool> check(N);

        for(int i = 0; i < N ; i++){
            cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
            check[i] = false;
        }
        for(int i = 0 ; i < N ; i++){
            bool A = false, B = false;
            if(!check[i]){
                for(int j = 0 ; j < N ; j++){
                    if(i == j) continue;
                    if(!check[j]){
                        if((arr[i][0].compare(arr[j][0]) == 0 && arr[i][1].compare(arr[j][1]) == 0) || (arr[i][0].compare(arr[j][2]) == 0 && arr[i][1].compare(arr[j][3]) == 0)){
                            A = true;
                        }
                        if((arr[i][2].compare(arr[j][2]) == 0 && arr[i][3].compare(arr[j][3]) == 0) || (arr[i][2].compare(arr[j][0]) == 0 && arr[i][3].compare(arr[j][1]) == 0)){
                            B = true;
                        }
                    }
                }
                if(A && B){
                    check[i] = true;
                    cnt--;
                }
            }
        }
        for(int i = 0 ; i < N ; i++){
            bool A = false, B = false;
            if(!check[i]){
                for(int j = 0 ; j < N ; j++){
                    if(i == j) continue;
                    if(!check[j]){
                        if((arr[i][0].compare(arr[j][0]) == 0 && arr[i][1].compare(arr[j][1]) == 0) || (arr[i][0].compare(arr[j][2]) == 0 && arr[i][1].compare(arr[j][3]) == 0)){
                            A = true;
                        }
                        if((arr[i][2].compare(arr[j][2]) == 0 && arr[i][3].compare(arr[j][3]) == 0) || (arr[i][2].compare(arr[j][0]) == 0 && arr[i][3].compare(arr[j][1]) == 0)){
                            B = true;
                        }
                    }
                }
                if(A || B){
                    check[i] = true;
                    cnt--;
                }
            }
        }
        result[t] = cnt;
    }
    for(int i = 0 ; i < T ; i++){
        cout << "Test Case #" << i+1 << "\n" << result[i] << endl;
    }


	return 0;
}