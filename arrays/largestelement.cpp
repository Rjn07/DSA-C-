class Solution {
public:
    int largest(std::vector<int>& arr, int n) {
        
      if(arr.empty()){
          return 0;
      }
        
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};