class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n =  nums.size(); // len of array nums 
        vector<int>ans(2*n);
        int start = 0;
        int count = 0 ;
        while(count<2){
            for(int i = 0 ; i <n ; i++){
                ans[start]=nums[i];
                start++ ;
            }
            count ++ ;
        }
        return ans ;
    }
};