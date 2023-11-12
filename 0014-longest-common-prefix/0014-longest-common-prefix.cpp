class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        string start = strs[0];
        string end = strs[strs.size()-1];
        int n = min(start.size(), end.size());
        for(int i=0; i<n; i++){
            if(start[i] != end[i]) {
                return ans;
            }

            ans += start[i];
        }

        return ans;
    }
};