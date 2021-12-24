
int T[37];
int flag = 1;

int tribonacci(int n){
    if (flag)
    {
        memset(T, -1, sizeof(T));
        flag = 0;
    }
    
    if (n == 0)
    {
        return 0;
    }
    else if (n <= 2)
    {
        return 1;
    }
    else
    {
        if (T[n-3] == -1)
            T[n-3] = tribonacci(n-3);
        if (T[n-2] == -1)
            T[n-2] = tribonacci(n-2);
        if (T[n-1] == -1)
            T[n-1] = tribonacci(n-1);
        return T[n-3] + T[n-2] + T[n-1];
    }
}