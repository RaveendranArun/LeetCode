

int removeDuplicates(int* nums, int numsSize){
    int i, j;
    
    if (numsSize == 0)
        return 0;
    i = 0;
    for (j = i+1; j< numsSize; ++j) {
        if (nums[i] != nums[j]) {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    
    return i + 1;
}