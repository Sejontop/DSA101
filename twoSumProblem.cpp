#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;

        for (int i = 0; i < nums.size(); i++) {
            int more = target - nums[i];

            if (m.find(more) != m.end()) {
                return {m[more], i};  // () returns int, {} returns vector
            }

            m[nums[i]] = i;  // store value and index
        }

        return {}; // return empty vector
    }
};

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    for (int idx : result) {
        cout << idx << " ";
    }

    return 0;
}
