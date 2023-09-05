int count(int n)
{
    if(n == 0) return 0;
    int count = 0;
    while(n > 0)
    {
        if(n & 1 == 1)
        {
            count++;
            n >>= 1;
        }
        else
        {
            n >>= 1;
        }    
    }

    return count;
}
int flipBits(int A, int B){
    // Write your code here.
    int newNo = A ^ B;
    return count(newNo);
}