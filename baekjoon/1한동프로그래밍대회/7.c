#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
    char str2[100] = "~`!@#$%%^&*()_-+=|\\{}[]:;\"\'<>,.?/\0";

    scanf("%s", str);

    if(strlen(str) < 8){
        printf("No Good! (use more than 7 chars)");
        return 0;
    }
    int check1 = 0, check2 = 0, check3 = 0, check4 = 0;
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] >= 'a' && str[i] <= 'z') check1 = 1;
        else if(str[i] >= 'A' && str[i] <= 'Z') check2 = 1;
        else if(str[i] >= '0' && str[i] <= '9') check3 = 1;
        for(int j = 0 ; j < strlen(str2) ; j++){
            if(str[i] == str2[j]) check4 = 1;
        }
    }
    if(check1 == 0 || check2 == 0){
        printf("No Good! (use both upper and lower chars)");
        return 0;
    }
    else if(check3 == 0){
        printf("No Good! (use a numerical char)");
        return 0;
    }
    else if(check4 == 0){
        printf("No Good! (use a special char)");
        return 0;
    }
    else {
        printf("Good Password!");
        return 0;
    }
    


	return 0;
}