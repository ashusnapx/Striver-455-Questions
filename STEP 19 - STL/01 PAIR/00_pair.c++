#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int,string> p;
    p = make_pair(20, "Ashutosh Kumar");
    p = {20, "Ashutosh Kumar --> Updated"};
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;

    // pair in arrays
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    for(int i = 0; i < 3; i++)
    {
        cout << p_array[i].first <<" "<< p_array[i].second << endl;
    }

    return 0;
}