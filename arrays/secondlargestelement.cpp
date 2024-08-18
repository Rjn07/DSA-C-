class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
         int n=arr.size();
            
      if(arr.empty()|| n<2){
          return -1;
      }
       
         int max = arr[0];
        int secondlargest = INT_MIN;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                 secondlargest =max;
                max = arr[i];
            }else if (arr[i] >secondlargest &&  arr[i]!=max){
                secondlargest=arr[i];
            }
        }
        return secondlargest;
    }
    
};