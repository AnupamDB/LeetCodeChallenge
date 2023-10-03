class Solution {
    public int tribonacci(int n) {
        int[] f=new int[n+3];
        f[0]=0;
        f[1]=1;
        f[2]=1;
        int t=0;
        while(t<n){
            f[t+3]=f[t]+f[t+1]+f[t+2];
            t++;
        }
        return f[n];
    }
}
