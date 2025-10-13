#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

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

struct ListNode* MergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    struct ListNode dummy;
    struct ListNode *tail = &dummy;
    struct ListNode *p1 = list1;
    struct ListNode *p2 = list2;

    printf("\n--- Merge Visualization ---\n");
    // First comparison to select the first node
    if (p1 && p2) {
        if (p1->val < p2->val) {
            printf("Selecting node from list1: %d\n", p1->val);
            tail->next = p1;
            p1 = p1->next;
        } else {
            printf("Selecting node from list2: %d\n", p2->val);
            tail->next = p2;
            p2 = p2->next;
        }
        tail = tail->next;
        printf("Current merged list: ");
        printList(dummy.next);
    }

    // Continue merging the rest of the nodes
    while (p1 && p2) {
        if (p1->val < p2->val) {
            printf("Selecting node from list1: %d\n", p1->val);
            tail->next = p1;
            p1 = p1->next;
        } else {
            printf("Selecting node from list2: %d\n", p2->val);
            tail->next = p2;
            p2 = p2->next;
        }
        tail = tail->next;
        printf("Current merged list: ");
        printList(dummy.next);
    }

    // Attach the remaining nodes
    if (p1) {
        printf("Attaching remaining nodes from list1 starting at: %d\n", p1->val);
        tail->next = p1;
    } else if (p2) {
        printf("Attaching remaining nodes from list2 starting at: %d\n", p2->val);
        tail->next = p2;
    }
    printf("Final merged list: ");
    printList(dummy.next);
    printf("--- End Visualization ---\n\n");

    return dummy.next;
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
