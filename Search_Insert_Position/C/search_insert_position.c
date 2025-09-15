#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    
}

int main(void) {

    int nums[4] = {1,3,5,6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 5;

    int result = searchInsert(nums, numsSize, target);
    printf("The index in which the target is or would be present is: %d\n", result);

    return 0;
}
