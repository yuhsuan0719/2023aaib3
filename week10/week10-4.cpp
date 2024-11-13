#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string name;
    Cat(string _name){
        name = _name;
    } ///沒有 return 值
    void print(){
        cout << "My name is " << name << ".\n";
    }
};

int main()
{ /// 建出cat1 和 cat2 時, 會用建構子, 把物件建構出來
    Cat cat1("小白"), cat2("小花");
    cat1.print();
    cat2.print();
}
