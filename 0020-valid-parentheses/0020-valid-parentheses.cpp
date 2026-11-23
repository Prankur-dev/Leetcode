class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<int>st;
        for(char &ch :s){
            if(st.empty() || ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
                continue;
            }
            else if(ch==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
            }
              else if(ch=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else{
                    st.push(ch);
                }
              }
                else {
                    if(st.top()=='['){
                    st.pop();
                    }
                    else{
                    st.push(ch);
                    }
            }
            }
        return st.empty();
        }
    
};