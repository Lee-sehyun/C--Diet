#include <bits/stdc++.h>

using namespace std;

struct Str{
    Str* pre;
    char ch;
    Str* next;
};

Str * Add(Str * s, char k);
Str * Remove(Str * s);
Str * Go(Str * s, int k);
Str * Delete(Str * s);
void Print(Str * s);

int main(){

    //입력
    string str, command;
    int T;
    Str * s = new Str;
    s->pre = NULL;
    s->next = NULL;


    // 시작해보자!
    cin >> T;
    for(int t = 0 ; t < T ; t++){
        cin >> str;
        for(int i = 0 ; i < str.length() ; i++){
            if(str[i] == '<'){
                s = Go(s, -1);
            }
            else if(str[i] == '>'){
                s = Go(s, 1);
            }
            else if(str[i] == '-'){
                s = Remove(s);
            }
            else{
                s = Add(s, str[i]);
            }
        }
        Print(s);
        cout << "\n";
        s = Delete(s);
    }
    // Print(s);


    


    return 0;
}

void Print(Str * s){
    while(s->pre != NULL){
        s = s->pre;
    }
    while(s->next != NULL){
        cout << s->ch;
        s = s->next;
    }
}

Str * Add(Str * s, char k){
    if(s->next == NULL){
        s->ch =  k;
        s->next = new Str;
        s->next->pre = s;
        s->next->next = NULL;
        return s->next;
    }
    else {
        Str * p = new Str;
        p->ch = k;
        p->pre = s->pre;
        if(p->pre != NULL){
            p->pre->next = p;
        }
        p->next = s;
        s->pre = p;
        return s;
    }
}

Str * Remove(Str * s){
    if(s->pre == NULL){
        return s;
    }
    else {
        Str * p = s->pre;
        if(p->pre == NULL){
            s->pre = NULL;
        }
        else {
            s->pre = p->pre;
            s->pre->next = s;
        }
        delete p;
        return s;
    }
}

Str * Go(Str * s, int k){
    if(k == -1){
        if(s->pre == NULL) return s;
        else return s->pre;
    }
    else {
        if(s->next == NULL) return s;
        else return s->next;
    }
}

Str * Delete(Str * s){
    while(s->pre != NULL){
        s = s->pre;
    }
    while(s->next != NULL){
        s = Remove(s->next);
    }
    return s;
}