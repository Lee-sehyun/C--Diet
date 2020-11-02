#include <stdio.h>

int main(void) {
  
    // if(num < k) ans = 1;
    // else if(num == k) ans = 0;
    // else ans = 2;
    // 입력받는 부분에 대신 넣기

    for(int k = 1 ; k <= 100 ; k++){
        // 여기에 복사해서 넣으면 됩니다.
        float num=50;
        int high = 100;
        int low =1;
        int ans = 0;
        int i=1;
        // printf("How about 50? (try more :1, try less : 2, right : 0)");
        if(num < k) ans = 1;
        else if(num == k) ans = 0;
        else ans = 2;
        while(1){
            if(ans == 1){
                low = num+1;
                num = (num + high)/2;
                i++;
            }
            if(ans == 2){
                high = num-1;
                num = (num + low)/2;
                i++;
            }
            if(ans == 0) break;
            
            if(num < k) ans = 1;
            else if(num == k) ans = 0;
            else ans = 2;
        }
        
        printf("%d tried. num : %.0f",i, num);
    }
  
  return 0;
}