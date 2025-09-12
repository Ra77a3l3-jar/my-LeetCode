#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    int present[256] = {'_'};
    
    int i = 0;
    for(int i = 0; i < numsSize; i++) {
        for(int j = 0; j < numsSize; j++) {
            if(nums[i] != present[j]) {
                printf("The number is not a duplicate\n");
                present[i] = nums[i];
            }
        }
    }

    return numsSize;
}

int main(void) {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int newSize = removeDuplicates(nums, numsSize);
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nNew length: %d\n", newSize);

    return 0;
}
