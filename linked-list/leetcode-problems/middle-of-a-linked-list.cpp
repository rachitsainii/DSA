#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*head = NULL;

void create(int A[], int n){
    int i;
    struct Node *t;
    struct Node *last;
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
    while( p != NULL){
        cout << p->data <<endl;
        p = p->next;
    }
}

void middleNode(struct Node *p){
    struct Node *q = p;
    struct Node *t = p;
    while(t != NULL && t->next != NULL){
        q = q->next;
        t = t->next->next;
    }
    display(q);
}


int main(){

    int A[] = {1,2,3,4,5};

    create(A,5);

    middleNode(head);

    return 0;
}