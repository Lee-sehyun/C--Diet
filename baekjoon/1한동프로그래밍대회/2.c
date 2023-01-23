#include <stdio.h>

int main() {
	int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if(!(a < c && b < c)){
        if(a < b){
            int temp = b;
            b = c;
            c = temp;
        }
        else {
            int temp = a;
            a = c;
            c = temp;
        }
    }

    if(a+b <= c){
        printf("#4. no triangle");
    }
    else if(c*c == a*a+b*b){
        printf("#1. right triangle");
    }
    else if(c*c > a*a+b*b){
        printf("#3. obtuse triangle");
    }
    else if(c*c < a*a+b*b){
        printf("#2. acute triangle");
    }
    


	return 0;
}