#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	vector<int> ans;
	int n = v.size();
	double useless = n / 3.0;
	int major = floor(useless);
	// cout << major << endl;

	unordered_map<int, int> freq;
	for(auto i: v)
	{
		freq[i]++;
	}

	for (auto& pair : freq) {
		// cout << "Number: " << pair.first << ", Frequency: " << pair.second << std::endl;
        if(pair.second > major)
		{
			ans.push_back(pair.first);
		}
    }
	sort(ans.begin(), ans.end());
	return ans;
}