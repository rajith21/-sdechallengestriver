int kthLargest(vector<int>& arr, int size, int K)
{
	sort(arr.begin(),arr.end());
    return arr[size-K];
}
