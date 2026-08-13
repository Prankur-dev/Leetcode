class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=0,max_height=height[0];
        int n=height.size(),index=0,water=0;


        //maximum height building
        for(int i=0;i<n;i++){
            if(height[i]>max_height){
                max_height=height[i];
                index=i;
            }
        }
        // left water
        for(int i=0;i<index;i++){
            if(left>height[i]){
                water+=left-height[i];

            }
            else{
                left=height[i];
            }
        }
        //right water 

        for(int i=n-1;i>index;i--){
            if(right>height[i]){
                water+=right-height[i];

            }
            else{
                right=height[i];
            }
        }
        return water;
    }
};