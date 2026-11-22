class Solution {
public:

    int operate(int a ,int b, string token){
        if(token=="+"){
            return a+b;
        }
        if(token=="-"){
            return b-a;
        }
        if(token=="*"){
            return long(a)*long(b);
        }
        if(token=="/"){
            return b/a;
        }

        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        for(string &token : tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                int a=st.top();
                st.pop();

                int b=st.top();
                st.pop();

                int ans=operate(a,b,token);
                st.push(ans);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};