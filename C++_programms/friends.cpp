/*properties of friend function
1. not member of class
2.since it is not in the scope of the class,it cannot be called from the object of that class 
3.can be invoked without the help of any object
4. usually contains the objects as arguements.
5. can be decelared inside public or private section of class.
6. it cannot access the members directly by the name and need object_name.member_name to access ANY memeber.*/


#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}