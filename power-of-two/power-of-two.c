

bool isPowerOfTwo(int n){
    if (n == 0)
        return false;
    long x = (long)n;
    if ((x & -x) == x)
        return true;
    else
        return false;
}