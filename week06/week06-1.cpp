/// week06-1.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a; ///���Y�ۦp�A�i�ܪ��ת��}�C
    a.push_back(30);
    a.push_back(20);
    a.push_back(10);
    for(int i=0; i<3; i++)
    {
        cout << a[i] << "\n";
    }
    sort(a.begin(), a.end());
    for(int i=0; i<3; i++)
    {
        cout << a[i] << " ";
    }
}
