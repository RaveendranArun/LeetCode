

int search(int* nums, int numsSize, int target){
    int start = 0;
    int end = numsSize - 1;
    
    if (numsSize == 1 && nums[0] == target)
            return 0;
    
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else if (target > nums[mid])
        {
            start = mid + 1;
        }
    }
    
    return -1;
}