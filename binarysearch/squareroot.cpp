#include <iostream>
using namespace std;

long long binarysearch(int n) {
    if (n < 0) return -1;  // Handle negative input

    long long s = 0;
    long long e = n;
    long long ans = -1;

    while (s <= e) {
        long long mid = s + (e - s) / 2;
        long long square = mid * mid;

        if (square == n) {
            return mid;  // Exact square root found
        } else if (square < n) {
            ans = mid;  // Mid is a candidate for the floor square root
            s = mid + 1;  // Search in the right half
        } else {
            e = mid - 1;  // Search in the left half
        }
    }

    return ans;  // Return the floor square root
}

int floorSqrt(int n) {
    if (n < 0) return -1;  // Handle negative input
    if (n == 0 || n == 1) return n;  // Handle simple cases
    return binarysearch(n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Floor of the square root of " << num << " is: " << floorSqrt(num) << endl;
    return 0;
}
