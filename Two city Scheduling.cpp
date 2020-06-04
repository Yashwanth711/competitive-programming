class Solution {
    
     public:static  bool f(vector<int> a,vector<int> b)
     {
         if((a[0]-a[1])>(b[0]-b[1]))
             return false;
         return true;
      }
    
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
    
        int n=costs.size();
        sort(costs.begin(),costs.end(),f);
     n/=2;
        int ans=0;
        int i;
        for(i=0;i<n;i++)
        {
            ans+=costs[i][0];
        }
        for(i=n;i<2*n;i++)
        {
            ans+=costs[i][1];
        }
        
        return ans;
        
    }
};