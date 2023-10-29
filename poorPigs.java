class Solution {
    public int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int x=minutesToTest/minutesToDie+1;
        int i=0;
        while(buckets>Math.pow(x,i)) i++;
        return i;
    }
}
