///week03-3.cpp �n�Ʋ� string �� iostream cin cout
#include <iostream>
#include <string>
///using namespace std; ///���ᤣ�μg std::string �� std::cin �� std::cout
using namespace std;///���ᤣ�μgstd::string �� std::cin �� std::cout
int main()
{
    string s;
    cout << "�п�J�@�ӫܪ����r��,�������n���Ů�: ";
    cin >> s;
    cout << "�r��" << s << "�����׬O" << s.length() << "\n";
    for(int i=0; i<s.length();i++)
    {
        cout << i << ":" << s[i] << endl; /// endl �p�gL �N�O "\n"
    }
}
