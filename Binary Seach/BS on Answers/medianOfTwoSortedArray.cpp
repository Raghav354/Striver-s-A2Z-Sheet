double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0, j = 0, k = 0;
    int n = nums1.size() + nums2.size();
    vector<int> arr(n, 0);
    while (i < nums1.size() && j < nums2.size())
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
    while (i < nums1.size())
        arr[k++] = nums1[i++];
    while (j < nums2.size())
        arr[k++] = nums2[j++];

    if (n % 2)
        return double(arr[n / 2]);
    else
        return (arr[n / 2] + arr[(n - 1) / 2]) / 2.0;
}