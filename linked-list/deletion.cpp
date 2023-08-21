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
    while( p != NULL) {
        cout << p->data <<endl;
        p = p->next;
    }
}

void deleteNode(int pos){
    if (pos == 1) {
        struct Node *p = head;
        head = head->next;
        int x = p->data;
        delete p;
    } else if (pos > 1) {
        struct Node *p = head;
        struct Node *q = NULL;
        for (int i = 0; i < pos; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        int x = p->data;
        delete p;
    }
}



int main(){

    int A[] = {1,2,3,4,5};

    create(A, 5);

    cout << "LL before deletion is:"<<endl;

    display(head);

    deleteNode(4);

    cout << "LL after deletion is:"<<endl;

    display(head);
    

    return 0;
}