#include <iostream>
using namespace std;

class Mouse
{
public:
    void print(){
        cout << "I am a mouse,�s�s\n";
    }
};
class Cat{
public:
    void print()
    {
        cout << "I am a cat,meow meow\n";
    }
};

int main()
{
    Mouse mouse1,mouse2;
    Cat cat1,cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
