#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output(2);
        bool flag = false;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    output[0] = i;
                    output[1] = j;
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
        return output;
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
