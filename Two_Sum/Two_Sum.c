#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(sizeof(int) * 2);
    if(result == NULL) {
        return NULL;
    }
    for(int i = 0; i < numsSize - 1; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if((nums[i] + nums[j]) == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

int main(void) {
    int nums[4] = {2,5,5,11};
    int numSize = sizeof(nums) / sizeof(int);
    int target = 10;
    int returnSize;

    int* indices = twoSum(nums, numSize, target, &returnSize);
    if(indices == NULL) {
        return 0;
    }

    printf("The indices are [%d, %d].\n", indices[0], indices[1]);
    
    free(indices);
    return 0;
}
