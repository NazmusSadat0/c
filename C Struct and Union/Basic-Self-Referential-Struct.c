#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node n1, n2, n3;

    n1.data = 10;
    n2.data = 20;
    n3.data = 30;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    struct Node *ptr = &n1;

    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}