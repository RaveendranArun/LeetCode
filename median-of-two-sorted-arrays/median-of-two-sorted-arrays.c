void sortArrays(int* nums, int numsSize){
    int i, j;
    int temp;
    for (i = 0; i < numsSize - 1; ++i){
        for (j = i + 1; j < numsSize; ++j){
            if (nums[i] > nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i = 0, j = 0, k = 0;
    int res[nums1Size + nums2Size];
    
    //sortArrays(nums1, nums1Size);
    //sortArrays(nums2, nums2Size);
    while((i < nums1Size) && (j < nums2Size)){
        if (nums1[i] < nums2[j]){
            res[k++] = nums1[i];
            i++;
        }
        else {
            res[k++] = nums2[j];
            j++;
        }
    }
    
    while(i < nums1Size)
    {
        res[k++] = nums1[i++];
    }
    
    while(j < nums2Size)
    {
        res[k++] = nums2[j++];
    }
    
    if (k % 2 == 0)
    {
        int l_idx = (k - 1) / 2;
        int h_idx = l_idx + 1;
        return (float)( (float)(res[l_idx] + res[h_idx]) / (float)2); 
    }
    else
    {
        int idx = (k - 1) / 2;
        return (float)res[idx];
    }
}