vector<int> countPrimes(int n)
{
    vector<bool> isPrime(n, 1);
    vector<int> ans;
    
    isPrime[0] = isPrime[1] = 0;

    for(int i = 2; i < n; i++)
    {
        if(isPrime[i]==true)
        {
            for(int j = 2 * i; j < n; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }

    for(int i = 2;i<n;i++)
    {
        if(isPrime[i] == true and n % i == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

// Leetcode approach : 
class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        
        vector<bool> isPrime(n, true);

        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i] == true) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i] == true) {
                count++;
            }
        }
        return count;
    }
};
