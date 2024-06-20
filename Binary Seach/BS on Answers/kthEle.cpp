int kthElement(int nums1[], int nums2[], int n1, int n2, int x)
{
    int i = 0, j = 0, k = 0;
    int n = n1 + n2;
    int arr[n];
    while (i < n1 && j < n2)
    {
        if (nums1[i] <= nums2[j])
        {
            arr[k++] = nums1[i++];
        }
        else
        {
            arr[k++] = nums2[j++];
        }
    }
    while (i < n1)
        arr[k++] = nums1[i++];
    while (j < n2)
        arr[k++] = nums2[j++];

    return arr[x - 1];
}