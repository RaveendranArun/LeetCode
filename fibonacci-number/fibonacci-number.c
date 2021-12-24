int F[30] = {-1};

int fib(int n){
    static int F[30];
    static int flag  = 1;
    if (flag)
    {
        memset(F, -1, sizeof(F));
        flag  = 0;
    }
    
    if (n <= 1)
    {
        return n;
    }
    else
    {
        if (F[n-2] == -1)
        {
             F[n-2] = fib(n-2);   
        }
           
        if (F[n-1] == -1)
        {
             F[n-1] = fib(n-1);  
        }
           
        return (F[n-2] + F[n-1]);
    }  
}




