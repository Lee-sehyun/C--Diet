struct Node {
    int data;
    Node * next;
};

struct Head {
    int size;
    Node * head;
    Node * tail;
};

Head * newHead();
void push(Head * h, int k);
int pop(Head * h);