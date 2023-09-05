vector<int> bitManipulation(int num, int i){
    vector<int> ans;
    // getting the i'th bit, bhai i'th bit k liye sirf woh waaala bit 1 ho
    // aur baaki sab 0 hona chahiye
    int mask = 1 << (i-1);
    ans.push_back((num & mask) >> (i-1));

    // i'th bit set karna hai..mtlb mujhe i'th bit
    // ko 1 karna hai
    int mask2 = 1 << (i-1);
    ans.push_back(num |= mask2);
    
    // clearing i'th bit
    int mask3 = ~(1 << (i-1));
    ans.push_back(num & mask3);
    
    return ans;
    
}

/*
25 == 11001
      00100 (OR operation for setting)
      -----
      11101
*/