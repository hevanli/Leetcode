class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int firstNum, secondNum;
        int firstNumIndex;
        vector<int> result;
        for(int i = 0; i<nums.size(); i++){
                firstNum = nums[i]; 
                firstNumIndex = i;
            for(int j = 0; j<nums.size(); j++){
                secondNum = nums[j];
                if((firstNum + secondNum) == target){
                    result.push_back(firstNumIndex);
                    result.push_back(j);
                    return result;
                }
            }
                       
        }
    }
};
