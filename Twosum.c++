class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
         for(int i=0; i<nums.size();i++){
            int Compelement = target - nums[i];
            if(mp.find(Compelement) != mp.end()){
                return {mp[Compelement],i} ;
            }
            mp[nums[i]] = i ;
         }
        return {};
    }
};