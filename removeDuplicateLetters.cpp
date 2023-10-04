class Solution {
public:
    string removeDuplicateLetters(string s) {
        string t="";
        stack<int> stack;
        unordered_map<char,int> d;
        unordered_set<char> seen;
        for(int i=0;i<s.length();i++) d[s[i]]=i;
        for(int i=0;i<s.length();i++){
            char x=s[i];
            if(seen.find(x)==seen.end()){
                while(!stack.empty() && x<stack.top() && i<d[stack.top()]){
                    int y=stack.top();
                    stack.pop();
                    seen.erase(y);
                }
                seen.insert(x);
                stack.push(x);
            }
        }
        while(!stack.empty()){
            t+=stack.top();
            stack.pop();
        }
        reverse(t.begin(), t.end());
        return t;
    }
};
