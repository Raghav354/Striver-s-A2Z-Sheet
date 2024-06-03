bool isValid(int i, int j, int n, int m)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
    {
        return true;
    }
    return false;
}
void MakeZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> temp = matrix;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            if (matrix[i][j] == 0)
            {
                if (isValid(i + 1, j, n, m))
                {
                    sum += matrix[i + 1][j];
                    temp[i + 1][j] = 0;
                }
                if (isValid(i - 1, j, n, m))
                {
                    sum += matrix[i - 1][j];
                    temp[i - 1][j] = 0;
                }
                if (isValid(i, j + 1, n, m))
                {
                    sum += matrix[i][j + 1];
                    temp[i][j + 1] = 0;
                }
                if (isValid(i, j - 1, n, m))
                {
                    sum += matrix[i][j - 1];
                    temp[i][j - 1] = 0;
                }
                temp[i][j] = sum;
            }
        }
    }
    matrix = temp;
}