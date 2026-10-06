class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0,ans=0;
        int n=s.size();
        for(char ch :s){
            if(ch=='('){
                open++;
            }
            else{
                if(open>0){
                    open--;
                }
                else{
                    ans++;
                }
            }
        }
        return ans+open;
    }
};