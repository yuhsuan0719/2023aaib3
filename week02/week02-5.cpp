class Solution {
public:
    bool isAnagram(string s, string t) {
        int H1 [256] = {}, H2[256] = {};//都是0
        for(char c : s){
            H1[c]++;
        }
        for(char c : t){
            H2[c]++;
        }

        for(int i=0; i<256; i++){ //整個陣列，逐一
            if(H1[i] != H2[i]) return false;
        }//如果左邊、右邊的出現次數不同，就失敗
        //如果面都沒失敗 成功

        return true;
    }
};