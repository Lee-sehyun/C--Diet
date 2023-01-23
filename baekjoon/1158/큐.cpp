#include <bits/stdc++.h>
#include "큐.hpp";

Head * newHead(){
    Head * h = new Head;
    h->head = NULL;
    h->tail = NULL;
    h->size = 0;
    return h;
}

void push(Head * h, int k){
    if(h->size == 0){
        h->tail = new Node;
        h->head = h->tail;
        h->tail->next = NULL;
        h->tail->data = k;
        h->size++;
    }
    else {
        h->tail->next = new Node;
        h->tail = h->tail->next;
        h->tail->next = NULL;
        h->tail->data = k;
        h->size++;
    }
}

int pop(Head * h){
    if(h->size == 0){
        return -1;
    }
    else {
        int temp = h->head->data;
        Node * t = h->head;
        if(h->size == 1) {
            h->head = NULL;
            h->tail = NULL;
        } 
        else h->head = h->head->next;
        delete t;
        h->size--;
        return temp;
    }
}