#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap; // value, idx
        for (int i = 0; i < nums.size(); i++) {
            if (hashMap.find(target - nums[i]) != hashMap.end()) 
                return { hashMap[target - nums[i]], i };
            hashMap[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution thing = Solution();
    vector<int> input;
    input.push_back(2);
    input.push_back(7);
    input.push_back(11);
    input.push_back(15);
    int targetInput = 9, targetInput2 = 10;
    vector<int> result = thing.twoSum(input, targetInput);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
