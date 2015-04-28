#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "stack.h"


int top (stack s){
    assert (getSize(s) > 0);
    return s.contents[s.size-1];
}

stack pop (stack s) {
    assert (getSize(s) > 0);
    s.size--;
    return s;
}

stack push (stack s, int value) {
    assert (getSize(s) < getMaxSize(s));
    s.contents[s.size] = value;
    s.size++;
    return s;
}

stack newStack (void) {
    stack new;
    new.size = 0;
    new.maxSize = MAX_STACK;
    return new;
}

int getSize (stack s) {
    return s.size;
}

int getMaxSize (stack s){
    return s.maxSize;
}
