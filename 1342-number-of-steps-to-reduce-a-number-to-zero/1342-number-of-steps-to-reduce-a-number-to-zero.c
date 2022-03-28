

int numberOfSteps(int num){
    int steps = 0;
    int powOfTwo = 1;
    
    if (num == 0)
        return 0;
    
    while (powOfTwo <= num)
    {
        if (powOfTwo & num)
        {
            steps += 2;
        }
        else
        {
            steps += 1;
        }
        
        powOfTwo *= 2;
    }
    
    return steps - 1;
}