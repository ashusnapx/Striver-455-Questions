/* 
https://www.codingninjas.com/studio/problems/count-of-greater-elements-to-the-right_8365436?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1 
*/

/* brute force approach */
vector<int> countGreater(vector<int>& arr, vector<int>& q) {
    int n = arr.size(), m = q.size();
    vector<int> ans;

    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = q[i] + 1; j < n; j++) 
        { // Start from q[i]+1 to the end
            if (arr[j] > arr[q[i]]) {
                count++;
            }
        }
        ans.push_back(count);
    }

    return ans;
}
