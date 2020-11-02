#include <stdio.h>

int main(void) {
  
    // if(num < k) ans = 1;
    // else if(num == k) ans = 0;
    // else ans = 2;
    // 입력받는 부분에 대신 넣기

    for(int k = 1 ; k <= 100 ; k++){
        // 여기에 복사해서 넣으면 됩니다.
        int ans;
        int guess= 50;
        int tries = 0;
        int max=101;
        int min=0;
        while(1){
            if(guess < k) ans = 1;
            else if(guess == k) ans = 0;
            else ans = 2;
            tries +=1;
            if(ans == 1){
            if(min < guess)
                min = guess;
            guess = guess + (max -min)/2;
            
            }
            else if(ans == 2){
            if(max >guess)
                max = guess;
            guess = guess - (max - min)/2;
            
            }
            else{
            printf("%d tried. num : %d\n", tries, guess);
            break;
            }
            
            
        }









    }
  
    return 0;
}