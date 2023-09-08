#include <iostream>
#include <vector>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int main() {
    int row;
    cout << "Enter number of rows : ";
    cin >> row;

    vector< vector < int > > v(row);

    for(int i = 0; i < row; i++) {
        vector < int > ans;
        for(int j = 0; j <= i; j++) {
            int nCr = factorial(i) / (factorial(j) * factorial(i - j));
            ans.push_back(nCr);
        }
        v[i] = ans;
    }

    for(auto row: v) {
        for(auto val: row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
