class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> res;
       for(auto it:strs){
        string temp = it;
        sort(temp.begin(),temp.end());
        res[temp].push_back(it);
       }
       vector<vector<string>>result;
       for(auto it : res){
                result.push_back(it.second);
       }
        return result;
    }
};
