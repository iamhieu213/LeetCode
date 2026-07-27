class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // Con trỏ cuối phần tử hợp lệ của nums1
        int j = n - 1;         // Con trỏ cuối nums2
        int k = m + n - 1;     // Vị trí cuối cùng của nums1

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // Nếu nums2 vẫn còn phần tử thì chép nốt vào nums1
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};