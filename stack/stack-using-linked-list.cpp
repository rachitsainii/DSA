#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*top = NULL;

void push(int x){
    struct Node *t = new Node;
    if (t == NULL){
        cout << "Stack OverFlow";
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){
    struct Node * p = NULL;
    int x = -1;
    if (top == NULL){
        cout << "Stack Underflow";
    } else {
        p = top ;
        top = top->next;
        x = p->data;
        delete(p);
    }

    return x;
}

int peak(int pos){
    int x = -1;
    struct Node *p = top;
    for (int i = 0; p!= NULL && i < pos - 1; i ++){
        p = p->next;
    }

    if( p != NULL){
        return p->data;
    } else {
        return -1;
    }
}

int stackTop(){
    if (top != NULL){
        return top->data;
    } else {
        return -1;
    }
}

bool isEmpty(){
    if (top == NULL){
        return 1;
    } else {
        return 0;
    }
}

bool isFull(){
    struct Node *t = new Node;
    int r = t ? 1 : 0;
    free(t);
    return r;
}

void display(){
    struct Node *p;
    p = top;
    while(p != NULL){
        cout << p->data <<endl;
        p = p->next;
    }
}

int main(){

    push(10);

    push(20);

    push(30);
    
    push(40);
    
    push(50);

    cout << pop() << endl;

    cout << stackTop() << endl;

    cout << isEmpty() << endl;

    cout << isFull() << endl;

    display();


    return 0;
}