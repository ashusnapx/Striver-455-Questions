#include <bits/stdc++.h> 
vector<string> subsequences(string str){
	vector<string> ans;
	for(int i = 0; i < pow(2, str.length()); i++)
	{
		string sub = "";
		for(int j = 0; j < str.length(); j++)
		{
			if(i & (1 << j)) 
			{
				sub += str[j];
			}
		}
		if(sub.length()!=0)
		{
        	ans.push_back(sub);
    	}
	}
	return ans;
}
