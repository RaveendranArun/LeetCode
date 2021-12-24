
int S[45];
int climb_stairs(int i, int n)
{
    if (i > n)
        return 0;
    if (i ==n)
        return 1;
    if (S[i] != -1)
        return S[i];
    S[i] = climb_stairs(i+1, n) +  climb_stairs(i+2, n);
    return S[i];
}

int climbStairs(int n){
    memset(S, -1, sizeof(S));
    return climb_stairs(0, n);
}