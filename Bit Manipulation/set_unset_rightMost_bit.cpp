int setBits(int num){
    int n=num;
    int i=0;
    while(n!=0)
    {
        i++;
        if((n&1) != 1)
        {
            break;
        }
        n=n>>1;
    }
    int mask = 1<<i-1;
    return mask|num;
}