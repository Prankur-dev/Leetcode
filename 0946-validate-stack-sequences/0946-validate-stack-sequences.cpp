class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = popped.size();
        int i=0,j=0;
        stack<int>st;
        while(i<n && j<n){
            st.push(pushed[i]);

            while(!st.empty() && st.top()==popped[j] &&j<n){
                st.pop();
                j++;
            }
            i++;
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};