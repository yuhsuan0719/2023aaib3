class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vetor<string> ans; //放答案(伸縮自如的陣列),形狀 要return一樣

        stringstream ss(text); // 把string 轉成像 cin cout 的 stream

        string word1, word2, word3; //第1.2.3個字
        ss >> word1;//像cin >> word1 的方法,講到資料
        ss >> word2;
        while(ss >> word3)
        {
            if(word1 == first && word2==second) ans.push_back(word3); //放答案
            word = word2;
            word = word3;
        }
        return ans;
    }
};
