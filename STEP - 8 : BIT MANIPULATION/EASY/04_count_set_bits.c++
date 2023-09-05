int countSetBits(int N)
{
    int count = 0;
    for(int i = 1; i <= N; i++)
    {
        int num = i;
        while(num > 0)
        {
            count += num & 1;
            num >>= 1;
        }
    }

    return count;
}