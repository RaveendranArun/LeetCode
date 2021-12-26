

int maxArea(int* height, int heightSize){
    int maxArea = 0;
    int start = 0;
    int end = heightSize -1;
    
    while (start < end) {
        int min = (height[start] < height[end]) ? height[start] : height[end];
        int currentArea = min * (end - start);
        if (currentArea > maxArea)
            maxArea = currentArea;
        
        if (height[start] < height[end])
            start++;
        else
            end--;
    }  
    
    return maxArea;
}