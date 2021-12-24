

int subtractProductAndSum(int n){
    int p = 1;
    int s = 0;
    int t;
    
    while (n)
    {
        t= n %10;
        n /= 10;
        p *= t;
        s += t;
    }
    
    return p-s;
}