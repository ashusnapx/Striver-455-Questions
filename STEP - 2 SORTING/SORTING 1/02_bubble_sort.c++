/* pushes max to end by adjacent swaps */
void bubbleSort(vector<int> &arr, int n) 
{
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 0; j <= i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}