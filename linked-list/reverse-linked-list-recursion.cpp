#include <iostream>
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

    for( i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void reverse(struct Node *p){
    if(p!= NULL){
        reverse(p->next);
        cout << p->data << endl;
    }
}

int main(){

    int A[] = {1,2,3,4,5};

    create(A, 5);

    reverse(head);

    return 0;
}