bool isKthBitSet(int n, int k)
{
    int mask=1;
    mask=mask<<k-1;
    return (n&mask);
}