// interface functions for an abstract stack
// implemented as an array
// richard buckland
// 28 April 2014
// edits by Salil - 24 April 2015

#define MAX_STACK 100

typedef struct _stack *Stack; //Stack is an ADT

int top (Stack s);
void pop (Stack s);
void push (Stack s, int value);
Stack newStack(void);
void freeStack(Stack s);
int getSize(Stack s);
int getMaxSize (Stack s);
