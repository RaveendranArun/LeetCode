uint32_t reverseBits(uint32_t n) {
    int ret = 0;
    int power = 31;
    
    while (n)
    {
        ret += (n & 1) << power;
        n >>= 1;
        power--;
    }
    
    return ret;
}