#include <stdio.h>
#include <stdlib.h>

/*
 * practice:
 *  > front to last
 *  > last to front
 *  > insert in order
 *  > delete element if equal to n
 *  > reverse
 */

// #define NULL ((void*) 0)
typedef struct _node *Node;
typedef struct _node {
    int value;
    Node next;
} node;

typedef struct _list *List;
typedef struct _list {
    Node first;
} list;

List createList(void) {
    List l = malloc(sizeof(list));
    l->first = NULL;
    return l;
}

Node createNode(int value) {
    /*node newNode;
    newNode.value = 5;
    newNode.next = NULL;
    return &newNode;*/

    Node newNode = malloc(sizeof(node)); // = malloc(sizeof(*newNode))
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Flavour #1 - iterating & doing something to the value
void printList(List l) {
    /*
     * int i = 0;
     * while (i < n) {
     *  printf("%d\n", array[i]);
     *  i++;
     * }
     */
    Node curr = l->first;
    while (curr != NULL) {
        printf("[%d]->", curr->value);
        curr = curr->next;
    }
    printf("[X]\n");
}

// Second flavour: using prev + going to LAST element
// Consider boundaries:
// -> will it work with l->first = NULL
// -> will it work with just 1 element? 2? 3? ... n?
// -> will it work if i have to change the last element
// -> does it work normally
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
    // 4 5
    node1->next = node2;
    printf("[%d]->[%d]\n", node1->value, node1->next->value);
    Node node3 = createNode(6);
    node2->next = node3;
    
    printf("[%d]->[%d]->[%d]\n", node1->value, node1->next->value, node1->next->next->value); //node2->next->value);

    printf("node3->next = %p\n", node3->next);
    //printf("node3->next = %d\n", node3->next->value);
    node3->next = createNode(7);
    printf("node3->next = %p\n", node3->next);
    printf("[%d]->[%d]->[%d]->[%d]\n", node1->value, node1->next->value, 
            node1->next->next->value, node1->next->next->next->value); //node2->next->value);

    // work!
    List l = createList();
    l->first = node1;
    printList(l);
    lastElementToFront(l);
    printList(l);

    List emptyList = createList();
    lastElementToFront(emptyList);
    printList(emptyList);

    List oneElementList = createList();
    oneElementList->first = createNode(4);
    lastElementToFront(oneElementList);
    printList(oneElementList);

    return EXIT_SUCCESS;
}
