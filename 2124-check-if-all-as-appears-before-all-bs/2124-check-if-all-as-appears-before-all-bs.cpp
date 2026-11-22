class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        int last_a=-1;
        int first_b=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                last_a=i;
            }
            else if(first_b==-1){
                first_b=i;
            }
        }
        if(last_a<first_b){
            return true;
        }
        if(last_a==-1 || first_b ==-1){
            return true;
        }

        return false;
    }
};