#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node *first = new Node;
Node *second = new Node;


void create_first(int array[], int size){
    int i = 0;
    struct Node *t;
    struct Node *last;
    first->data = array[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < size; i++){
        t = new Node;
        t->data = array[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create_second(int array[], int size){
    int i = 0;
    struct Node *t;
    struct Node *last;
    second->data = array[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < size; i++){
        t = new Node;
        t->data = array[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *head){
    while (head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}

void push(int ele){
    while()
}

int main(){

    int A[] = {8,6,3,9,10,4,2};

    int B[] = {20,30,40,10,4,2};

    create_first(A,7);

    create_second(B, 6);

    cout << "The first LL is :" << endl;
    display(first);

    cout << "The second LL is :" << endl;
    display(second);

    return 0;
}