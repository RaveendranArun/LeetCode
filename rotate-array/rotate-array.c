

void rotate(int* nums, int numsSize, int k){

    int i, j;
    int temp;
    int t[numsSize];
    
    for (i = 0; i < numsSize; ++i)
        t[(i+k) % numsSize] = nums[i];
    for (i = 0; i < numsSize; ++i)
        nums[i] = t[i];
}