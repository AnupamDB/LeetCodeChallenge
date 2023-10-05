class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> v;
        vector<int> ans;
        int n=nums.size();
        if(n==1) return nums;
        for(auto i:nums){
            v[i]++;
        }
        for(auto i:v){
            if(i.second>(n/3)) ans.push_back(i.first);
        }   
        return ans;
    }
};
