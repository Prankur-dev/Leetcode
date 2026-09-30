class Solution {
public:
    void reverse(vector<char>& s,int start,int end){
       while(start<=end){
        swap(s[start],s[end]);
        start++,end--;
       }
    }
    void reverseString(vector<char>& s) {
        int n=s.size();
        reverse(s,0,n-1);
    }
};