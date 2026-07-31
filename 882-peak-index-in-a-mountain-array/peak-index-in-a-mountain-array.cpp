class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1; // peak can't be starting element
        int end = arr.size() - 2; // peak can't be ending element

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) {
                return mid;
            }

            if (arr[mid - 1] < arr[mid]) { //increasing slope
                start = mid + 1;
            } else { // decreasing slope
                end = mid - 1;   
            }
        }

        return -1;
    }
};