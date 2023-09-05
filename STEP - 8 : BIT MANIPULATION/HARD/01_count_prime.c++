bool isPrime(int n)
{
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
vector<int> countPrimes(int n)
{
    vector<int> ans;
    // prime factors aise numbers hote hain, 
    // jo khud se aur 1
    // aur 1 se divisible hote hain
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0 and isPrime(i))
        {
                ans.push_back(i);
        }
    }
    if(isPrime(n)) ans.push_back(n);
    return ans;
}