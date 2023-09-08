/* select minimum and swap */
void selectionSort(vector<int>&arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < arr[mini]) mini = j;
        }
        swap(arr[i], arr[mini]);
    }
}
