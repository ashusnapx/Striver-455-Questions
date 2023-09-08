#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<char, int>& a, const pair<char, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

string sortByFrequency(int n, string& s) {
    map<char, int> m;
    for (char c : s) {
        m[c]++;
    }
    vector<pair<char, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), compare);

    string ans = "";
    for (const auto& q : v) {
        ans += string(q.second, q.first);
    }
    return ans;
}
