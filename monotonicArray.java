class Solution {
    public boolean isMonotonic(int[] nums) {
        int n=nums.length;
        if(n<2) return true;
        int dir=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                if(dir==0) dir=1;
                else if(dir==-1) return false;
            }
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                if(dir==0) dir=-1;
                else if(dir==1) return false;
            }
        }
        return true;
    }
}
