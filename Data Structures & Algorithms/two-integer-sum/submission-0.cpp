class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash= {};
        vector<int> ans = {};
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(hash.contains(diff)){
                auto index2 = hash.find(diff);
                ans.insert(ans.begin(),index2->second);
                ans.insert(ans.begin() + 1, i);
                return ans;
            }
            else{
                hash.insert({nums[i], i});
            }
        } 
        
    }
};
