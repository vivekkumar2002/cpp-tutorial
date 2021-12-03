#include <iostream>
using namespace std;
class baseclass
{
public:
    int var1 = 1;
    virtual void display()
    {
        cout << "1. displaying baseclass variable var1 " << var1 << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var2 = 2;
    void display()
    {
        cout << "2. displaying baseclass variable var1 " << var1 << endl;
        cout << "2. displaying derivedclass variable var2 " << var2 << endl;
    }
};
int main()
{
    baseclass *baseclasspointer;
    baseclass objbase;
    derivedclass objderived;

    baseclasspointer = &objderived;
    baseclasspointer->display();

    return 0;
}