class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        nums.resize(2 * n);
        for(int i=n,j=0;i<2*n;i++,j++){
            nums[i]=nums[j];
        }
        return nums;
    }
};