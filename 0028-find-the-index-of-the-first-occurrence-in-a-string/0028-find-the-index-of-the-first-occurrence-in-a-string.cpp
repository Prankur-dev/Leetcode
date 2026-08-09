class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();
        //lps of needle
        int pre=0,suf=1;
        vector<int>lps(m,0);
        while(suf<m){
            if(needle[pre]==needle[suf]){
                lps[suf]=pre+1;
                pre++,suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        //KMP Matching
        int first=0,sec=0;
        while(first<n && sec<m){
            if(haystack[first]==needle[sec]){
                first++,sec++;
            }
            else{
                if(sec==0){
                    first++;
                }
                else{
                    sec=lps[sec-1];
                }
            }
            if(sec==m){
                return first-sec;
            }
        }
        return -1;
    }
};