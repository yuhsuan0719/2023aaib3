class Solution {
public:
    int minBitFlips(int start, int goal) {
        while(start>0){
            cout << start%2;
            start /= 2;
        }
        return ans;
    }
};