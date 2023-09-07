#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> s;

    s.insert("abc");
    s.insert("dbc");
    s.insert("ebc");

    auto it = s.find("abdc");

    if(it!=s.end()) cout << "Hola Amigo!" << endl;
    else cout << it << endl;

    for(auto it2: s)
    {
        cout << (it2) << endl;
    }


    return 0;
}