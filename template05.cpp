// member function templates & overloading template function
#include <iostream>
using namespace std;
template <class t>
class hariya
{
public:
    t data;
    hariya(t a)
    {
        data = a;
    }
    void display()
    {
        cout << data << endl;
    }
};
void func(int a)
{
    cout << "i am first func " << a << endl;
}

template <class t>
void func(t a)
{
    cout << "i am templatised func " << a << endl;
}
int main()
{
    hariya<int> h(5);
    cout << h.data << endl;
    h.display();

    func(4); //
    return 0;
}