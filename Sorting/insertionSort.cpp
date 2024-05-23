// Tip -: From current value check all the previous value and insert the value at right place.  

int n;
void insert(int arr[], int j)
{
    int temp = arr[j + 1];
    for (; j >= 0; j--)
    {
        if (arr[j] > temp)
        {
            arr[j + 1] = arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j + 1] = temp;
}

void insertionSort(int arr[], int n)
{
    this->n = n;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        insert(arr, j);
    }
}