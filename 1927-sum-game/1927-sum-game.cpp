class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int LeftKnownSum=0;
        int RightKnownSum=0;

        int leftQnMarkCount=0;
        int rightQnMarkCount=0;

        for(int i=0;i<n;i++){
            if(num[i]=='?'){
                if(i<n/2){
                    leftQnMarkCount++;
                }
                else{
                    rightQnMarkCount++;
                }
            }
            else{
                if(i<n/2){
                    LeftKnownSum+=num[i]-'0';
                }
                else{
                    RightKnownSum+=num[i]-'0';
                }
            }
        }
        int TotalQnMarks=leftQnMarkCount+rightQnMarkCount;
        if(TotalQnMarks%2==1){
            return true;
        }

        int LEFT = 2*LeftKnownSum + 9*leftQnMarkCount;
        int RIGHT = 2*RightKnownSum + 9*rightQnMarkCount;

        if(LEFT==RIGHT){
            return false;
        }
        else{
            return true;
        }

    }
};