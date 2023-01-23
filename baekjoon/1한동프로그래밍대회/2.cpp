# include <iostream>
# include <cstring>

using namespace std;

char& find(char a[], char c, bool& seccess){
    int i = 0, count = 0;
    char* temp;

    while (a[i] != '\0'){
        if (a[i] == c){
            temp = &a[i];
            count++;
        }
        i++;
    }
    if (count != 0) seccess = true;
    return *temp;   
}

int main() {
    char s[] = "paplae";
    bool b = false;
    char& loc = find(s, 'a', b);
    if(b == false) {
        cout << "a를 발견할 수 없습니다." << endl;
        return 0;
    }
    loc = 'A';
    cout << s << endl;
}