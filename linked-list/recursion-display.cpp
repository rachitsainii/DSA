#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node * next;
}*head = NULL;

void create(int A[], int n){
    int i;
    struct Node *t;
    struct Node *last;
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (i = 1 ; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
    if(p != NULL){
        cout << p->data <<endl;
        display(p->next);
    }
}
int main(){

    int A[] = {2,3,4,5,6,7};

    create(A, 6);

    display(head);

    return 0;
}