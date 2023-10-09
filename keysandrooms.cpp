class Solution {
public:
    void dfs(int s, vector<vector<int>>& rooms, vector<bool>& v){
        v[s]=true;
        for(int i=0;i<rooms[s].size();i++){
            if(!v[rooms[s][i]]) dfs(rooms[s][i], rooms,v);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> v(n,false);
        dfs(0,rooms,v);
        for(int i=0;i<n;i++){
            if(!v[i]) return false;
        }
        return true;
    }
};
