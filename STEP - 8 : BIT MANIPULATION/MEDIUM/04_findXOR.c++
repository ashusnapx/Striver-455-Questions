// My approach - 1 test case out of 50 was failing
int findXOR(int L, int R)
{
    long long ans = 0;
    for(int i = L; i <= R; i++) ans ^= i;
    return int(ans);
}

// Other guy approach, seen on discussion plarform
int Xor(int n)
{

    if (n % 4 == 1)
    {

        return 1;
    }
    else if (n % 4 == 2)
    {

        return n + 1;
    }
    else if (n % 4 == 3)
    {

        return 0;
    }
    else
    {

        return n;
    }
}

int findXOR(int L, int R)
{

    return Xor(R) ^ Xor(L - 1);

}