// Divide Intervals Into Minimum Number of Groups

    int minGroups(vector<vector<int>>& inte) {
        
        map<int, int>m;
        
        for(auto x:inte){
            m[x[0]]++;
            m[x[1]+1]--;
        }
        
        int ans=0, ct=0;
        for(auto x:m){
            ct+= x.second;
            ans= max(ans, ct);
        }
        return ans;
    }
};
