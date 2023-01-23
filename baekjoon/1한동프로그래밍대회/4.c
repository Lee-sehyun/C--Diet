#include <stdio.h>

int main() {
	int w, h, f;

    scanf("%d %d %d", &w, &h, &f);
    int k = h-1;

    for(int i = 0 ; i < h ; i++){
        if(f == 2){
            for(int j = 0 ; j < k ; j++){
                printf(" ");
            }
        }
        else if(f == 1){
            for(int j = k+1 ; j < h ; j++){
                printf(" ");
            }
        }
        printf("#");
        for(int j = 2 ; j < w ; j++){
            if(i == 0 || i == h-1) printf("#");
            else printf(" ");
        }
        printf("#");
        k--;
        printf("\n");
    }
    


	return 0;
}