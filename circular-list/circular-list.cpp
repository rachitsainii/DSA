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
    head->next = head;
    last = head;

    for (i = 1; i < n; i ++){
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
    do {
        cout << p->data << endl;
        p = p->next;
    } while ( p != head);
    cout << "\n";
}

int main(){

    int A[] = {1,2,3,4,5,6};

    create(A, 6);

    display(head); 

    return 0;
}