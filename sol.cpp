class Solution {
    public:
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          
    
        sort(nums.begin(),nums.end());  // for the removing the multiple processing.
        
        set<vector<int>> st;
    
    
        int n = nums.size();
    
        int subset = 1<<n;
    
    
        for(int num = 0; num<subset; num++){
         
         vector<int>list = {};
    
         for(int i = 0; i<n; i++){
           
           if(num &(1<<i)){
            list.push_back(nums[i]);
           }
    
    
         }
          st.insert(list);
    
        }
         
    
          vector<vector<int>> ans(st.begin(),st.end());
          return ans;
        }
    };