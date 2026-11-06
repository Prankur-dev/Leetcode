class Solution {
public:

    void  generateParenth(int n,int left,int right,string &temp,vector<string>&ans){
        //base condition
        if(left==n && right==n){
            ans.push_back(temp);
            return;
        }
        if(left<n){
            temp.push_back('(');
            generateParenth(n,left+1,right,temp,ans);
            temp.pop_back();
        }

         if(right<left){
             temp.push_back(')');
             generateParenth(n,left,right+1,temp,ans);
             temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string>ans;
        int left,right;
        generateParenth(n,0,0,temp,ans);
        return ans;
    }
};