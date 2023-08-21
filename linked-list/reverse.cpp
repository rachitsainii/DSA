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

    for (i = 1; i < n; i ++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p) {
    while( p != NULL ){
        cout << p->data <<endl;
        p = p->next;
    }
}

int countElements(struct Node *p){
    int count = 0;
    while( p!= NULL){
        count += 1;
        p = p->next;
    }

    return count;
}

void reverseElements(struct Node *p, int size) {
    p = head;
    int i = 0;
    int B[size];
    while (p != NULL) {
        B[i] = p->data;
        p = p->next;
        i++;
    }
    p = head;
    i --;
    while (p!= NULL) {
        p->data = B[i--];
        p = p->next;
    }
} 

void reverseLinks(struct Node *p){
    p = head;
    struct Node *q = NULL;
    struct Node *r = NULL;
    while ( p != NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    head = q;
}

void recursiveReverse(struct Node *q, struct Node *p){
    if (p != NULL){
        recursiveReverse(p, p->next);
        p->next = q;
    }else {
        head = q;
    }
}
   

int main(){

    int A[] = {1,2,3,4,5};

    create(A,5);

    cout << "Original List :" << endl;

    display(head);

    int sizeOfArray = countElements(head);

    cout << "Reversed List :" << endl;

    // reverseElements(head, sizeOfArray);

    // reverseLinks(head);

    recursiveReverse(NULL, head);

    display(head);


    return 0;
}