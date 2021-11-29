#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
        
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base 1 is " << base1int << endl;
        cout << "the value of base 2 is " << base2int << endl;
        cout << "the sum of these values is " << (base1int + base2int) << endl;
    }
};
int main()
{
    derived vivek;
    vivek.set_base1int(25);
    vivek.set_base2int(5);
    vivek.show();

    return 0;
}