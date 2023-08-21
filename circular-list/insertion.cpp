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


void display(struct Node *p)
{
    do {
        cout << p->data << endl;
        p = p->next;
    } while (p != head);

    cout << "\n";
}

void insert(struct Node *p, int x, int pos){
    struct Node *t;
    p = head;
    if(pos == 0){
        t = new Node;
        t->data = x;
        if (head == NULL){
            head = t;
            head->next = head;
        } else {
            while(p->next != head){
                p = p->next;
                }
            p->next = t;
            t->next = head;
            head = t;   
        }
        
    } else {
        t = new Node;
        for (int i = 0; i < pos - 1 ; i++){
            p = p->next;
        }
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int main(){

    int A[] = {2,3,4,5,7};

    create(A,5);

    display(head);

    insert(head, 1, 0);

    insert(head, 6, 5);

    display(head);

    return 0;
}