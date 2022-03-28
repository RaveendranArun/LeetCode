int hammingWeight(uint32_t n) {
    int pos;
    int count = 0 ;
    
    for (pos = 31; pos >= 0; --pos)
    {
        if ((n >> pos) & 1)
            count++;
    }
    
    return count;
}