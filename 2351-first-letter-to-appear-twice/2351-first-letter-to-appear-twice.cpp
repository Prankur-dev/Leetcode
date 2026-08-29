class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            if(st.contains(s[i])){
                return s[i];


            }
            st.insert(s[i]);
        }
        return ' ';

    }
};