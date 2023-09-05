string oddEven(int N){
    // for this i need to check only last bit, if it is 0 or not.
    // for this i'll use AND operator
    /*
    lets take 8 for example = 1000
    */
    // if((N & 1) == 0) return "even";
    // return "odd";

    return (N&1) == 0 ? "even" : "odd";
}