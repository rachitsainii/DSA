#include <iostream>
using namespace std;

struct Node{
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

int maxElement(struct Node *p){
    int max = 0;
    while (p != NULL){
        if (max <= p->data){
            max = p->data;
        }
        p = p->next;
    }
    return max;
}



int main(){

    int A[] = {34,1,23,67,4};

    create(A, 5);

    int output = maxElement(head);

    cout << output << endl;

    return 0;
}