class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0; // Initialize a variable to store the Hamming weight

        // Loop until n becomes 0
        while (n) {
            // Check if the least significant bit (LSB) of n is 1
            if (n & 1) {
                ans++; // Increment the count if the LSB is 1
            }

            n = n >> 1; // Right shift n by 1 to move to the next bit
        }

        return ans; // Return the calculated Hamming weight
    }
};
