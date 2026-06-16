class Solution {
public:
    int removeElement(vector<int>& v, int val) {
        auto it = remove(v.begin(), v.end(), val);
        return it - v.begin();
    }
};