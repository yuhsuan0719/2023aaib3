class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s: operations)
        {
            int N = a.size(); //aΤn计
            if(s=="+") a.push_back( a[N-1]+a[N-2] ); //程2掸
            else if(s=="D")a.push_back( a[N-1]*2); //程掸ㄢ
            else if(s=="C")a.pop_back(); //奔
            else a.push_back( stoi(s) ); //计
        }
        int ans = 0; //р柑场癬ㄓ
        for(int b : a) ans += b;
        return ans;
    }
};
