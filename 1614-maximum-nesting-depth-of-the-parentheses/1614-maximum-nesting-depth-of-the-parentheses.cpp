class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int result=0;
        int openBracket=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                openBracket++;
            }
            else if(s[i]==')'){
                openBracket--;
            }
            result=max(result,openBracket);
        }
        return result;
    }
};