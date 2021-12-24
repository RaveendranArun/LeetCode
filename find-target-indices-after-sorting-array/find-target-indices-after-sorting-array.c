
void bubbleSort(int* p, int n)
{
    int i, j;
    
    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0 ; j < n-1-i; ++j)
        {
            if (p[j] > p[j+1])
            {
                int t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
    }
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize){
    bubbleSort(nums, numsSize);
    int i, k= 0;
    
    for (i = 0; i < numsSize; ++i)
        printf("%d ", nums[i]);
    
    int* out = (int* )malloc(sizeof(int) * numsSize);

    for (i = 0; i < numsSize; ++i)
    {
        if (nums[i] == target)
            out[k++] = i;
    }
    
    *returnSize = k;    
    return out;
}