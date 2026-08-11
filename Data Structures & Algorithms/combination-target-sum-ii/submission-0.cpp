class Solution {
public:
    void findcombination(int ind , int target , vector<int>&arr,vector<vector<int>>&ans , vector<int>&ds ){
        if(target == 0 ){
            ans.push_back(ds);
            return ;
        }
        for(int i = ind ; i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue ; // duplicate case an iteration se aage jane ke case band karne ke liye 
            if(arr[i]>target)break ;// woh case check nahi honge  jo target ko subtract karne ke baad negative bana de 
            ds.push_back(arr[i]);
            findcombination(i+1 , target - arr[i], arr , ans , ds );
            ds.pop_back();
        }
    }



public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>ds ;
        findcombination(0,target,candidates,ans , ds );
        return ans ;
    }
};
