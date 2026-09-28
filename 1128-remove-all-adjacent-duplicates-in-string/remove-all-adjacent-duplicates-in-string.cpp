class Solution {
public:
    int length(string s){
        int i = 0;
        while(s[i] != '\0'){
            i++;
        }
        return i;
    }

    string removeDuplicates(string s) {
        stack<char> st;
        string ans = "";
        int n = length(s);

        for(int i = 0; i < n; i++){
            if(!st.empty()){
                if(st.top() == s[i]){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};