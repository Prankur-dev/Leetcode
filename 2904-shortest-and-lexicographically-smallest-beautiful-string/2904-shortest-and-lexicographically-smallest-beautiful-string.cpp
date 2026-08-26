class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int i=0,j=0,ones=0;
        string result="";
        while(j<n){
            if(s[j]=='1'){
                ones++;
            }
            while(ones>k || s[i]=='0'){
                if(s[i]=='1'){
                    ones--;
                }
                i++;
            }
            if(ones==k){// found beutiful string 
                string temp=s.substr(i,j-i+1);
                if(result.empty() || temp.length()<result.length() ||
                (temp.length()==result.length() && temp<result)){
                    result=temp;
                }
            }
            j++;
        }
        return result;
    }
};