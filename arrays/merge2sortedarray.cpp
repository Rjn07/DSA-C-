class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; // Last index of nums1's valid elements
        int j = n - 1; // Last index of nums2
        int k = m + n - 1; // Last index of merged array

        // Merge nums1 and nums2 from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If nums2 is not exhausted, fill nums1 with remaining nums2 elements
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
