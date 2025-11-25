#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *current = head;

    while (current != NULL && current->next != NULL) {
        if (current->val == current->next->val) {
            struct ListNode *tmp = current->next;
            current->next = tmp->next;
            free(tmp);
        } else {
            current = current->next;
        }
    }
    return head;
}
