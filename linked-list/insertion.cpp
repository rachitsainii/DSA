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

    for (i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node* p){
    while( p != NULL ){
        cout << p->data << endl;
        p = p->next;
    }
}

void insert(struct Node *p, int pos, int val){
    if (pos == 0){
        struct Node * x = new Node;
        x->data = val;
        x->next = head;
        head = x;
    } else if (pos > 0) {
        struct Node * x = new Node;
        x->data = val;
        p = head;
        for (int i = 0; i < pos - 1; i++){
            p = p->next;
        }
        x->next = p->next;
        p->next = x;
    }
}


int main(){

    int A[] = {2,3,4,5,6};

    create(A, 5);

    cout << "LL before insertion is : " << endl;

    display(head);

    insert(head, 5, 7);

    cout << "LL after insertion is : " << endl;

    display(head);

    return 0;
}