///week06-2-a.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int now;
    while( cin >> now )
    {
        a.push_back(now);
        cout << now << "\n"; ///先這樣寫
        ///寫甚麼印甚麼
    }/// 輸入時 結束全部輸入ctrl-z 加 Enter
}
