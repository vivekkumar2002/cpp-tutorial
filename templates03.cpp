// class template with default parameters.
#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>
class hariya
{
public:
    t1 a;
    t2 b;
    t3 c;
    hariya(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};
int main()
{
    hariya<> h(4, 6.4, 'c');
    h.display();
    cout << endl;
    hariya<char, char, char> g('c', 'o', 'c');
    g.display();
    return 0;
}