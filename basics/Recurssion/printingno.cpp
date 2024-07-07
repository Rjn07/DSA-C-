#include <iostream>
using namespace std;

void print(int n) {
    if (n == 0) {
        return;  // Base case: Stop recursion when n reaches 0
    }
    
    cout << n << endl;  // Print current number
    print(n - 1);       // Recursively call print with n-1
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    print(n);  // Call the print function to print numbers from n to 1
    
    return 0;
}
