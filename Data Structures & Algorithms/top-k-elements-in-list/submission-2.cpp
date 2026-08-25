class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }    
        priority_queue<pair<int,int>> max_heep;
        for( auto[num,count] : mp){
            max_heep.push({count,num});
        }
        while(k>0 && !max_heep.empty()){
            ans.push_back(max_heep.top().second);
            max_heep.pop();
            k--;
        }
        return ans;
    }
};
