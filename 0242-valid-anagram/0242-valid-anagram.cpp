class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ans;
        if(s.size() < t.size() || t.size() < s.size()){
            ans = false;
        }else{
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for(int i=0; i<t.size(); i++) {
                if(s[i] == t[i]) {
                    ans = true;
                }else{
                    ans = false;
                    break;
                }
            }
        }

        return ans;
    }
};