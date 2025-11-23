int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));

    for(int j = 0; j < numsSize - 1; j++) {
        for(int k = j + 1; k < numsSize; k++) {
            if(nums[j] + nums[k] == target) {
                result[0] = j;
                result[1] = k;

                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;  // only run if no pair found (never happens in LC)
    return NULL;
}
