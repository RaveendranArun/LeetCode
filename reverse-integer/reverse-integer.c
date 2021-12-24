int reverse(int x){
    int rev = 0;
    int p = 0;
    while (x) {
        p = x % 10;
        if ((rev > INT_MAX/10) || ((rev == INT_MAX/10) && (p > 7)))
            return 0;
        if ((rev < INT_MIN/10) || ((rev == INT_MIN/10) && (p < -8)))
            return 0;
        rev = (rev * 10) + (x % 10);
        x /= 10;
    }
    
    return rev;
}