#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    int T;

    cin >> T;

    string line[T];
    string word;
    stringstream divide;

    getline(cin, line[0]);

    for(int i = 0 ; i < T ; i++){
        getline(cin, line[i]);
    }

    for (int i = 0 ; i < T ; i++){
        divide.str(line[i]);
        while(divide >> word){
            for (int j = 0 ; j < word.size() ; j++){
                cout << word[word.size()-j-1];
            }
            cout << " ";
        }
        cout << endl;
        divide.clear();
    }


    


    return 0;
}