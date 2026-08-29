class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> result;
        for(int i=0;i<nums.size();i++){
            result[nums[i]]++;
        }
        int max=0;
        int ans;
        for(auto it: result){
            if(it.second>max){
                max=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};