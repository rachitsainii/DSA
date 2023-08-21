#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*head = NULL;


void create(int A[], int n){
    int i = 0;
    struct Node *t;
    struct Node *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for (i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display_list(struct Node *p){
    do {
        cout << p->data;
        p = p->next;
    } while( p != head);

    cout << "\n";
}


void delete_node(struct Node *p, int pos){
    int x = 0;
    if (pos == 1){
        p = head;
        while(p->next != head){
            p = p->next;
        }
        p->next = head->next;
        x = head->data;
        delete head;
        head = p->next;
    } else {
        p = head;
        for (int i = 0; i < pos - 2; i++){
            p = p->next;
        }
        struct Node *q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
}

int main(){

    int A[] = {1,2,3,4,5,6};

    create(A,6);

    display_list(head);

    delete_node(head,1);

    delete_node(head,3);

    display_list(head);

    return 0;
}