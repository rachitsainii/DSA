#include<iostream>
using namespace std;

struct Node {
    char data;
    struct Node *next;
}*top = NULL;


void push(char x){
    struct Node *p = new Node;
    if (p == NULL){
        cout << "Stack Overflow." <<endl;
    } else {
        p->data = x;
        p->next = top;
        top = p;
    }
}

int pop() {
    int x = -1;
    struct Node *p;
    if (top == NULL){
        cout << "Stack Underflow" << endl;
    } else {
        top = p;
        top = top->next;
        x = p->data;
        delete(p);
    }

    return x;
}

void display(char *s){
    struct Node *p = top;
    while (p != NULL){
        cout << p->data <<endl;
        p = p->next;
    }
}


void reverse(char *s){
    int count = 0;
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++){
        push(s[i]);
        count ++;
    }

    char output[count];

    struct Node *p = top;

    while(p != NULL){
        output[j] = p->data;
        cout<< output[j] ;
        p = p->next;
        j++;
    }

    cout<< '\n';
}


int main(){

    char *s = "Rachit";

    reverse(s);

    return 0;
}