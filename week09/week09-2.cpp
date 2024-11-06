class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) /2;//錯的!
        if(low%2==1 || high%2==1) ans++;//頭尾有奇數,就要+1
        //不知道為什麼,交給大家想想看
        return ans;//先不要送出,多試幾次
    }
};