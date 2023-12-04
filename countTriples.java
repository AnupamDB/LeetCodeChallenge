class Solution {
    public int countTriples(int n) {
        int count = 0;

        for (int a = 1; a <= n; ++a) {
            for (int b = a; b <= n; ++b) {
                double c = Math.sqrt(a * a + b * b);
                
                // Check if a^2 + b^2 equals c^2
                if (a * a + b * b == (int)c * c && c <= n) {
                    count+=2;
                }
            }
        }

        return count;
    }
}
