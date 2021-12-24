

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    
    int size = 0;
    int i, j, k = 0;
    
    for (i = 0; i < numsSize; i += 2)
        size += nums[i];
    
    int* ans = (int* )malloc(sizeof(int) * size);
    
    for (i=0; i < numsSize; i += 2)
    {
        for (j = 0; j < nums[i]; ++j)
        {
            ans[k++] = nums[i+1];
        }
    }
    
    *returnSize = size;
    return ans;
}