class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int c=-1,d=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                c=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(nums[j]==target){
                d=j;
                break;
            }
        }
        return {c,d};
    }
};
