#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2, 3, 5, 6, 7};
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> :: iterator it = v.begin(); // this can be written as auto it
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for(int value: v)
    {
        cout << value <<" ";
    }

    return 0;
}