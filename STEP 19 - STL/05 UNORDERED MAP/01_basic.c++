#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<int, string> m;
    m[20] = "Ashu";
    m[99] = "Yogi";
    m[39] = "Hritik";
    m[69] = "Rahul";
    m.insert({78, "Sanket"});
    // map<int, string> :: iterator it; this replaced by auto keyword
    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout << it -> first << " " << it -> second << " , ";
    }
    cout << endl;
    for(auto &pr: m)
    {
        cout << pr.first << " " << pr.second << " , ";
    }

    cout << endl;
    auto it2 = m.find(20);
    if(it2 == m.end()) cout <<"no value found"<<endl;
    else cout << it2->first <<" "<< it2->second << endl;
    m.erase(69);
    cout << endl;
    for(auto &pr: m)
    {
        cout << pr.first << " " << pr.second << " , ";
    }
    return 0;
}