

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int maxWealth = 0;
    int sum = 0;
    int i, j;
    
    for (i = 0;i < accountsSize; ++i)
    {
        sum = 0;
        for (j = 0; j < *accountsColSize; ++j)
        {
            sum += accounts[i][j];
        }
        
        if (sum > maxWealth)
            maxWealth = sum;
    }
    
    return maxWealth;
}