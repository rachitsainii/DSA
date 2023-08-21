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

void search(struct Node *p, int key){
    struct Node *q = NULL;
    while(p!=NULL){
        if ( p->data == key){
            q->next = p->next;
            p->next = head;
            head = p;
            cout << "Element found at " << p << endl; 
        }
        q = p;
        p = p->next;
    }
    cout << "Element not found!" << endl;
}

void display(struct Node *p){
    while (p != NULL){
        cout << p->data << endl;
        p = p->next;
    }
}



int main(){

    int A[] = {23,41,78,65,43,1,56};

    create(A, 7);

    cout << "LL before searching is :" << endl;
    display(head) ;

    search(head, 56);

    cout << "LL after searching is :" << endl;
    display(head) ;


    return 0;
}