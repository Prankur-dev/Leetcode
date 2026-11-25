class Solution {
public:
    string simplifyPath(string path) {
        vector<string>vec;
        string token = "";
        stringstream ss(path);

        while(getline(ss, token,'/')){
            if(token=="" || token=="."){
                continue;
            }

            else if(token!=".."){
                vec.push_back(token);
            }
            else if(!vec.empty()){
                vec.pop_back();
            }
        }

        if(vec.empty()){
            return "/";
        }
        string result="";
        for(auto &token :vec){
            result=result+"/"+token;
          
        }
        return result;
    }
};