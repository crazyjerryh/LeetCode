class Solution {
public:
    static bool ispalindromic(string s){
        int n=s.size();
        int i,j;
        i=0,j=n-1;
        
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
public:
    string longestPalindrome(string s) {
        string substr,maxstr;
        int maxlen=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                substr=s.substr(i,j);
                if(ispalindromic(substr))
                     if(maxlen<j)
                     {
                         maxlen=j;
                         maxstr=substr;
                     }
            }
        }
        
        return maxstr;
    }
};