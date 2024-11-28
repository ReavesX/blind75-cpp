class Solution {
public:
    int carry;
    int getSum(int a, int b) {
        while (b != 0){ // do until carry doesnt exist
            int carry = (a & b) << 1; /* carry contains the bits 
                                         that are the same shifted left 11
                                         */
            a = a ^ b;
            b = carry;        
        }
        return a; //return sum
    }
};
