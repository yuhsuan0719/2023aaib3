class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end()); //從大到小排好
        double total = 0;//陷阱 有小數點
        for(int i=1;i<salary.size()-1;i++)
        {   
            //避開 最小salary[0]、最大salary[N-1];
            total += salary[i];
        }
        return total / (salary.size()-2); // 平均，就是除法
        
    }
};