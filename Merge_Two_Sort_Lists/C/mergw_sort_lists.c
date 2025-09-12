#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

// Forward declaration of the function to be implemented
struct ListNode* MergeTwoLists(struct ListNode* list1, struct ListNode* list2);

// Helper to create a new node
struct ListNode* newNode(int val) {
    struct ListNode *node = malloc(sizeof(struct ListNode));
    if (!node) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    node->val = val;
    node->next = NULL;
    return node;
}

// Helper to print a list
void printList(struct ListNode *head) {
    struct ListNode *p = head;
    while (p) {
        printf("%d", p->val);
        if (p->next) printf(" -> ");
        p = p->next;
    }
    printf("\n");
}

// Helper to free a list
void freeList(struct ListNode *head) {
    struct ListNode *p = head;
    while (p) {
        struct ListNode *tmp = p;
        p = p->next;
        free(tmp);
    }
}

int main(void) {

    // Build list1
    struct ListNode *list1 = newNode(1);
    list1->next = newNode(2);
    list1->next->next = newNode(4);

    // Build list2
    struct ListNode *list2 = newNode(1);
    list2->next = newNode(3);
    list2->next->next = newNode(4);

    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    struct ListNode *merged = MergeTwoLists(list1, list2);

    printf("Merged list: ");
    printList(merged);

    // Free memory
    freeList(merged);

    return 0;
}
