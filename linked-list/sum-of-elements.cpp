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

    for (i = 1; i< n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Using While Loop
int loopSum(struct Node *p){
    int sum = 0;
    while (p!=NULL) {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

// Using Recursion
    int sum = 0;
int recursiveSum(struct Node *p){
    if (p == NULL){
        return 0;
    } else {
        return recursiveSum(p->next) + p->data;
    }
}

int main(){

    int A[] = {1,2,3,4,5};

    create(A,5);

    int output = recursiveSum(head);

    cout << output << endl;

    return 0;
}