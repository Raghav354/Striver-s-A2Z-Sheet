int calcGCD(int n, int m){

    while(n!=m)
    {
        if(n>m)
        n-=m;
        else
        m-=n;
    }
    return m;

}