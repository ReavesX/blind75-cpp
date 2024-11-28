/*

371. Sum of Two Integers

Problem: Given two integers a and b, return the sum of the two integers without using the operators + and -.

Example 1:

    Input: a = 1, b = 2
    Expected Output: 3

Example 2:
    Input: a = 2, b = 3
    Expected Output: 5
 

Constraints:
    -1000 <= a, b <= 1000

*/

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
