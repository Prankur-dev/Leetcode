class Solution {
public:
    string simplifyPath(string path) {
        string result="";
        string token="";
        stringstream ss(path);
        stack<string>st;
        while(getline(ss,token,'/')){
            if(token=="" || token==".") continue;

            else if(token!=".."){
                st.push(token);
            }
            else if(!st.empty()){
                st.pop();
            }
        }
        if(st.empty()){
            return "/";
        }

        while(!st.empty()){
            result="/"+st.top()+result;
            st.pop();
        }
        return result;
        
    }
};