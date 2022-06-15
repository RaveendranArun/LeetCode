

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    
    int* out = (int* )malloc(sizeof(int) * 2);
    memset(out, -1, sizeof(int) * 2 );
    *returnSize = 2;
    
        int low = 0;
        int high = numbersSize - 1;
        while (low < high) {
            int sum = numbers[low] + numbers[high];
                          
            if (sum == target) {
                out[0] = low+1;
                out[1] = high+1;
                return out;
            } else if (sum < target) {
                ++low;
            } else {
                --high;
            }
        }
    
    return out;
}