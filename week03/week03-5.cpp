class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        int N = s2.length();
        //cout << string::npos;
        return s2.substr(1, N-2).find(s) != string::npos;
        //
        
        
    }
};