#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    // Counter of shifts(deletions)
    int deleted = 0;
    int lastUnique = nums[0];
    
    for(int i = 1; i < numsSize; i++) {
        // If nums[i] == the last unique number it will increase the counter of shifts to leave a single unique
        if(nums[i] == lastUnique) {
            deleted += 1;
        } else {
            lastUnique = nums[i];
            nums[i - deleted] = nums[i]; // This is the shift
        }
    }

    numsSize -= deleted;

    return numsSize;
}

int main(void) {
    // Example input: sorted array with duplicates
    int nums[] = {1, 1, 1, 2, 2};
    
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
