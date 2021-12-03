// class template with multiple parameters
#include <iostream>
using namespace std;
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << data2; // this function revision is remaining.
    }
};
int main()
{
    myclass<int, char> obj(1, 'c');
    obj.display();

    return 0;
}