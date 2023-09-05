bool isKthBitSet(int n, int k)
{
    int mask = 1 << (k-1);
    int val = (n & mask) >> (k-1);
    if(val == 1) return true;
    return false;
}