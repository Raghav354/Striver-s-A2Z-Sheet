// Tip -: Find sum of all natural number till size

int missingNumber(int A[], int N)
{
    int nsum = 0;
    nsum = (N * (N + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < N - 1; i++)
    {
        sum += A[i];
    }

    int ans = nsum - sum;
    return ans;
}