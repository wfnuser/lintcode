class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        long long zeros = 0;
        while(true){
            zeros += n / 5;
            n = n / 5;
            if (n <= 0) break;
        }
        return zeros;
    }
};