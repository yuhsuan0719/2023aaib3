#include <iostream>
#include <string>
using namespace std;

class Cat{ ///���O
public:
    string name; ///��ơB�ݩ�
    void print() { ///�禡�B��k
        cout << "I am a cat.My name is " << name << ".\n";
    }
};

int main()
{
    Cat cat1, cat2;
    cat1.name = "�p��";
    cat1.print();
    cat2.name="�p��";
    cat2.print();
}
