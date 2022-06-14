

void duplicateZeros(int* arr, int arrSize){
    int i = 0, j;
    
    while (i < arrSize)
    {
        if (arr[i] == 0)
        {
            i++;
            for (j = arrSize-1; j > i; --j)
            {
                arr[j] = arr[j-1];
            }
            arr[j] = 0;
        } 
        i++;
    }
}