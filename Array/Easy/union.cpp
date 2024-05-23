
/* Tip -: 1. Put the smaller value in union array and increment that smaller value's array index.
          2. Find unique element after each iteration in both array.
*/ 

void uniqueInd(int arr[], int &i, int n)
{
    do
    {
        i++;
    } while (i < n && arr[i] == arr[i - 1]);
}
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> un;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            un.push_back(arr1[i]);
            uniqueInd(arr1, i, n);
        }
        else if (arr1[i] > arr2[j])
        {
            un.push_back(arr2[j]);
            uniqueInd(arr2, j, m);
        }
        else
        {
            un.push_back(arr1[i]);
            uniqueInd(arr1, i, n);
            uniqueInd(arr2, j, m);
        }
    }
    while (i < n)
    {
        un.push_back(arr1[i]);
        uniqueInd(arr1, i, n);
    }
    while (j < m)
    {
        un.push_back(arr2[j]);
        uniqueInd(arr2, j, m);
    }
    return un;
}