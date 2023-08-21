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

    for (i = 1; i < n; i ++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void search(struct Node *p, int element){
    while( p!= NULL) {
        if (element == p->data){
            cout << "Element found! at "<< p << endl;
            exit(0);
        }
        p = p->next; 
    }

    cout << "Element Not Found!" << endl;
}

int main(){
     
     int A[] = {34,65,21,3,26,75};

     create(A, 6);

     search(head, 21);

    return 0;
}