#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;

    while(test_cases--)
    {
        int bag, minutes;
        cin >> bag >> minutes;

        multiset < long long > bags;

        for(int i = 0; i < bag; i++)
        {
            long long candy_count;
            cin >> candy_count;

            bags.insert(candy_count);
        }

        long long total_candies = 0;

        for(int i = 0; i < minutes; i++)
        {
            auto it = (--bags.end());
            long long candy_count = *it;
            total_candies += candy_count;
            bags.erase(candy_count);
            bags.insert(candy_count / 2);
        }

        cout << total_candies << endl;
    }

    return 0;
}