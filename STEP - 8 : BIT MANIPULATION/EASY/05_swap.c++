void swapNumber(int& a, int& b) {
    a = a ^ b; // a now contains the XOR of a and b
    b = a ^ b; // b now contains the original value of a
    a = a ^ b; // a now contains the original value of b
}
