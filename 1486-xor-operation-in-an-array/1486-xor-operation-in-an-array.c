

int xorOperation(int n, int start){
    int xor = start;
    int i;
    
    for (i = 1; i < n; ++i)
    {
        xor ^= (start + 2 * i);
    }
    
    return xor;
    
}