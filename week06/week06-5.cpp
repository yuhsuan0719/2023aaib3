class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vetor<string> ans; //�񵪮�(���Y�ۦp���}�C),�Ϊ� �nreturn�@��

        stringstream ss(text); // ��string �ন�� cin cout �� stream

        string word1, word2, word3; //��1.2.3�Ӧr
        ss >> word1;//��cin >> word1 ����k,������
        ss >> word2;
        while(ss >> word3)
        {
            if(word1 == first && word2==second) ans.push_back(word3); //�񵪮�
            word = word2;
            word = word3;
        }
        return ans;
    }
};
