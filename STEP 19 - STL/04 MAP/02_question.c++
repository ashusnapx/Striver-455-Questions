#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> m; // string is word and int is its frequency
    int n;
    cin >> n; // number of strings
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    for(auto pr: m)
    {
        cout << pr.first <<" "<< pr.second << endl;
    }

    return 0;
}