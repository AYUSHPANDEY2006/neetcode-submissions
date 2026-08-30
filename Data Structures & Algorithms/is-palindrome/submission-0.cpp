class Solution {
public:
    bool isPalindrome(string s) {
        string h ;
        for(int i=0 ; i<s.size();i++){
            if(isalnum(s[i])){
                h=h+(char)tolower(s[i]);
            }
        }
        int start = 0 ;
        int end = h.size()-1;
        while (start <  end ){
            if(h[start]!=h[end]){
                return 0 ;
            }
            start ++ , end-- ;   
        }
        return 1 ; 
    }
};
