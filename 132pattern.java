class Solution {
    public boolean find132pattern(int[] nums) {
        int n=nums.length;
        Stack<Integer> s=new Stack<>();
        int m=Integer.MIN_VALUE;
        for(int i=n-1;i>=0;i--){
            if(m>nums[i]) return true;
            while(!s.empty() && s.peek()<nums[i]){
                m=s.peek();
                s.pop();
            }
            s.push(nums[i]);
        }            
        return false;
    }
}
