int missingNumber(int n, vector<int> &arr){
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        res ^= arr[i];
    }
    return res;
}