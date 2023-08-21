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

void display(struct Node *p){
    while( p != NULL) {
        cout << p->data <<endl;
        p = p->next;
    }
}

void deleteParticularElement(struct Node *p, int key){
    struct Node *q = NULL;
    if (head->data == key) {
        struct Node *temp = head;
        head = head->next;
        delete temp;
    } else {
        while ( p != NULL) {
            if (p->data != key){
                q = p;
                p = p->next;
            } else if (p->data == key){
                q->next = p->next;
                struct Node *temp2 = p;
                p = p->next;
                delete temp2;
            }

        }
    }
}

void removeElements(struct Node* p, int key) {
        p = head;
        struct Node *q = NULL;
        if (head == NULL){
            exit(0);
        } else {
            while ( p != NULL){
                if (p->data != key && p->next != NULL){
                    q = p;
                    p = p->next;
                } else if (p->data == key && p->next != NULL){
                    q->next = p->next;
                    struct Node *temp1 = p;
                    p = p->next;
                    delete(temp1);
                } else if (p->data != key && p->next == NULL){
                    q->next = NULL;
                    struct Node *temp2 = p;
                    p = head;
                    delete(temp2);
                }
            }
        }
    }




int main(){

    int A[] = {7,7,7,7};

    create(A, 4);

    cout << "The LL before deletion is :" << endl;

    display(head);

    cout << "The LL after deletion is :" << endl;

    // deleteParticularElement(head, 7);

    removeElements(head, 6);

    display(head);

    return 0;
}