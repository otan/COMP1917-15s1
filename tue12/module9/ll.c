#include <stdio.h>
#include <stdlib.h>

// #define NULL ((void*) 0)
/*
 * what you should know
 * > move the back to the front
 * > move the fron to the back
 * > insert into a linked list in order
 * > delete an arbitrary node from a linked list
 * > reverse a linked list
 *
 */
typedef struct _node *Node;
typedef struct _node {
    int value;
    Node next;
} node;

typedef struct _list *List;
typedef struct _list {
    Node first;
} list;

Node createNode(int value) {
    Node newNode = malloc(sizeof(node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

List createList(void) {
    List newList = malloc(sizeof(list));
    newList->first = NULL;
    return newList;
}

// Flavour #1: doing things with linked lists (not arranging)
void printList(List l) {
    /*
     *int i = 0;
     *while (i < n) {
        printf("%d\n", arr[i]);
        i++;
     *}
    */
    Node curr = l->first;
    while (curr != NULL) {
        printf("[%d]->", curr->value);
        curr = curr->next;
    }
    printf("X\n");
}

/*
 * does it work for an empty list?
 * does it work for one elment linked list, two element linked list, etc.
 * if it affects first, does it change stuff? same with last?
 * general condition
 */
// Flavour #2: changing a linked list
// Flavour #3: using prev to change a linked list
void lastElementToFront(List l) {
    if (l->first != NULL && l->first->next != NULL) {
        Node curr = l->first;
        Node prev = NULL;
        while (curr->next != NULL) {
            prev = curr;
            curr = curr->next;
        }
        curr->next = l->first;
        l->first = curr;
        prev->next = NULL;
    }
}

int main(int argc, char *argv[]) {
    Node node1 = createNode(4);
    printf("%d\n", node1->value);
    Node node2 = createNode(5);
    printf("%d\n", node2->value);

    node1->next = node2;
    printf("%d %d\n", node1->value, node1->next->value);

    Node node3 = createNode(6);
    node2->next = node3;
    printf("%d\n", node1->next->next->value);

    node3->next = createNode(7);
    printf("%d\n", node1->next->next->next->value);
    printf("%d\n", node2->next->next->value);
    printf("%d\n", node3->next->value);

    //printf("%d\n", node3->next->next->value);

    List l = createList();
    l->first = node1;
    printList(l);
    lastElementToFront(l);
    printList(l);

    printf("testing with empty list\n");
    List emptyList = createList();
    emptyList->first = NULL;
    printList(emptyList);
    lastElementToFront(emptyList);
    printList(emptyList);

    printf("testing with oneItem list\n");
    List oneItemList = createList();
    oneItemList->first = createNode(69);
    printList(oneItemList);
    lastElementToFront(oneItemList);
    printList(oneItemList);

    return EXIT_SUCCESS;
}
