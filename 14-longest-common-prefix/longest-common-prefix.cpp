class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end()); // 1. Added missing semicolon
        
        int n = strs.size();
        string f = strs[0];
        string l = strs[n - 1];
        
        string ans = ""; // 2. Declared string variable 'ans'
        int i = 0;
        
        while (i < f.size() && i < l.size()) {
            if (f[i] == l[i]) {
                ans += f[i];
                i++; // 3. Added increment to prevent infinite loop
            } else {
                break;
            }
        }
        
        return ans;
    }
};