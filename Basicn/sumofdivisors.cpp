#include <iostream>
using namespace std;

class Solution {
public:
    long long sumOfAllDivisors(int N) {
        long long sum = 0;
        
        // Iterate over each number from 1 to N
        for (int i = 1; i <= N; ++i) {
            // For each i, add i to the sum for every multiple of i up to N
            sum += (N / i) * i;
        }
        
        return sum;
    }
};

int main() {
    Solution sol;
    int N = 4;
    cout << sol.sumOfAllDivisors(N) << endl; // Output: 15
    return 0;
}
