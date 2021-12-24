int F[30];
int fib_memo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        if (F[n-2] == -1)
        {
             F[n-2] = fib_memo(n-2);   
        }
           
        if (F[n-1] == -1)
        {
             F[n-1] = fib_memo(n-1);  
        }
           
        return (F[n-2] + F[n-1]);
    }  
}

int fib(int n){
    memset(F, -1, sizeof(F));
    return fib_memo(n);
}




