// interface functions for a concrete stack
// implemented as an array
// richard buckland
// 28 April 2014
// edits by Salil - 24 April 2015

#define MAX_STACK 100

typedef struct _stack {
    int contents[MAX_STACK];
    int maxSize;
    int size;
} stack;

int top (stack s);
stack pop (stack s);
stack push (stack s, int value);
stack newStack(void);
int getSize(stack s);
int getMaxSize (stack s);
