class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }    
        for(int i=0;i<k;i++){
            int cur_max_feq=INT_MIN;
            int cur_max_elm=0;
            for(auto it : mp){
                if(it.second>cur_max_feq){
                    cur_max_feq=it.second;
                    cur_max_elm=it.first;
                }
            }
            ans.push_back(cur_max_elm);
            mp.erase(cur_max_elm);
        }
        return ans;
    }
};
