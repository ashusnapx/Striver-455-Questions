int positionOfMSB(int n)
{
    if (n == 0) {
        // Handle the case when the input number is 0.
        return -1; // Return -1 to indicate that there is no MSB.
    }

    int position = 0; // Initialize the position to 0 (rightmost bit).
    while (n > 1) {
        n = n >> 1; // Right-shift the number by 1 bit.
        position++; // Increment the position.
    }

    return position;
}
bool isPowerOfTwo(int n)
{	
    if(n == 1) return true;
    int mask = 1 << positionOfMSB(n);
    return (n & mask) == n ? true : false;
}