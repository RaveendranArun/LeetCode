

int countKDifference(int* nums, int numsSize, int k){
    int output = 0;
    int i, j;
    
    for (i = 0; i < numsSize-1; ++i)
    {
        for (j = i+1; j < numsSize; ++j)
        {
            if ((i !=j) && (abs(nums[i] - nums[j]) == k))
                output++;
        }
    }
    
    return output;
}