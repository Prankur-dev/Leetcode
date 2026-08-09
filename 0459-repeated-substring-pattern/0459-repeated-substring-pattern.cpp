class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        //lps find kiya phele s ka
        vector<int>lps(n,0);
        int pre=0,suff=1;
        while(suff<n){
            if(s[pre]==s[suff]){
                lps[suff]=pre+1;
                pre++;
                suff++;
            }
            else{
                if(pre==0){
                    lps[suff]=0;
                    suff++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        // aage ka repeat check krna ka kaam 
       
        if(n%(n-lps[n-1])==0 && lps[n-1]>0)
        return 1;

    
        
         return 0;
    }
};