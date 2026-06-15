class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n= strs.size()  ;
      string prefix =strs[0];
        for(int i=0;i<n;i++){
            int j;
            for(j=0;j<min(prefix.length(),strs[i].length());j++){
                if(prefix[j]!=strs[i][j]) break;
            }
            prefix = prefix.substr(0,j);
        }
        return prefix;
    }
};