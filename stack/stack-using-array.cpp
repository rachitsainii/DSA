#include<iostream>
using namespace std;

struct Stack {
    int size;
    int top;
    int * p;
};

void createStack(struct Stack *st){

    cout << "Enter the size of the stack" << endl;
    cin >> st->size;

    st->p = new int[st->size];

    st->top = -1;
}

void push(struct Stack *st, int ele){
    if (st->top == st->size-1){
        cout << "Stack OverFlow" << endl;
    } else {
        st->top++;
        st->p[st->top] = ele;
    }
}

int pop(struct Stack *st){
    int x = -1;
    if (st->top == -1){
        cout << "Stack Underflow" << endl;
    } else {
        x = st->p[st->top--];
        cout << " ";
    }
    return x;
}

int peek(struct Stack *st, int pos){
    int x = -1;
    if (st->top - pos + 1 < 0){
        cout << "Invalid" <<endl;
    } else {
        x = st->p[st->top - pos + 1];
    }

    return x;
}

int stackTop(struct Stack *st){
    if (st->top == -1){
        return -1;
    } else {
        return st->p[st->top];
    }
}

bool isEmpty(struct Stack *st){
    if (st->top == -1){
        return 1;
    } else {
        return 0;
    }
}

bool isFull(struct Stack *st){
    if (st->top == st->size-1){
        return 1;
    } else {
        return 0;
    }
}

void display(struct Stack *st){
    if ( st->top == -1){
        cout << "Stack is empty." <<endl;
    } else {
        while (st->top != -1) {
            cout << st->p[st->top] << "\n";
            st->top --;
        }
    }
}

int main() {

    struct Stack st;

    createStack(&st);

    push(&st , 10);

    push(&st, 20);

    push(&st , 30);

    push(&st, 40);

    push(&st, 50);

    // cout << pop(&st);

    // cout << pop(&st);

    cout << peek(&st, 2);

    display(&st);

    return 0;
}