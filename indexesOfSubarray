#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        long long sum = 0;
        int left = 0;

        for (int right = 0; right < arr.size(); right++) {
            sum += arr[right];

            // Shrink if it exceeds
            while (sum > target && left <= right) {
                sum -= arr[left];
                left++;
            }
            if (sum == target) {
                // Returning 1-based indexing (gfg)
                return {left + 1, right + 1};
            }
        }
        return {-1};
    }
};

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> result = obj.subarraySum(arr, target);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
