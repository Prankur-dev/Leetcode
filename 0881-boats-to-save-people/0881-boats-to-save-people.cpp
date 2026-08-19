class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int s=0,e=people.size()-1;
        int boats=0;
        while(s<=e){
            if(people[s]+people[e]>limit){
                e--;
                boats++;
            }
            else{
                s++;
                e--;
                boats++;
            }
         
        }
        return boats;
    }
};