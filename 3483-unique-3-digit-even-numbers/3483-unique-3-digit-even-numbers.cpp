class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_set<int>st;
        // ones digit
        for(int i=0;i<n;i++){
            if(digits[i]==0)
            continue;
        
        //tens digit
        for(int j=0;j<n;j++){
            if(i==j)
            continue;
        
         // hundred digit
        for(int k=0;k<n;k++){
            if(k==i || k==j)
            continue;

            if(digits[k]%2!=0)
            continue;

             int num=digits[i]*100+digits[j]*10+digits[k];// make a number 
                  st.insert(num);
        }
        }
        }
      

   

        return st.size();
    }
};