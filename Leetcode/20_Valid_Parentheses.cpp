class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto idx : s) {
           if(idx=='(' || idx=='{' || idx=='[') st.push(idx);
           else if(idx==')' || idx=='}' || idx==']') {
               if(st.empty()) return false;
               else if(idx==')' && st.top()!='(') return false;
               else if(idx=='}' && st.top()!='{') return false;
               else if(idx==']' && st.top()!='[') return false;
               else st.pop();
           }
        }
        if(st.empty()) return true;
        return false;
    }
};
