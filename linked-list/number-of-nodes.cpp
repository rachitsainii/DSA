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

// Using While Loop
int countNodes(struct Node *p){
    int count = 0;
    while(p!=NULL) {
        count +=1;
        p = p->next;
    }
    return count;
}

// Using Recursion
int recursiveCountNodes(struct Node *p){
    if (p == NULL){
        return 0;
    } else {
        return recursiveCountNodes(p->next) + 1;
    }
}

// Display LL
void display(struct Node *p) {
    while (p != NULL){
        cout << p->data <<endl;
        p = p->next;
    }
}



int main() {

    int A[] = {1,2,3,4,5};

    create(A,5);

    //display(head);

    int output = recursiveCountNodes(head);

    cout << output << endl;

    return 0;
}