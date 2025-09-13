#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int write = 0; 
    for (int read = 1; read < numsSize; read++) {
        // Compare current element with last unique element
        if (nums[read] != nums[write]) {
            write++; // Found a new unique element, move 'write' forward
            nums[write] = nums[read]; // Copy unique value to next position
        }
        
        printf("Iteration \n\n");
        for(int i = 0; i < numsSize; i++) {
            printf(" %d -", nums[i]);
        }
        printf("\n\n");
        // If nums[read] == nums[write], do nothing (skip duplicate)
    }
    // The first (write + 1) elements are unique
    return write + 1;
}

int main(void) {
    // Example input: sorted array with duplicates
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    // Call removeDuplicates and get new size
    int newSize = removeDuplicates(nums, numsSize);
    
    // Print deduplicated array
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nNew length: %d\n", newSize);

    return 0;
}
