#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of the employee is " << id << " and this is employee number " << count << endl;
    }
};
int employee ::count; //default value is 0
int main()
{
    employee ramu, mingu, ankur;

    ramu.setdata();
    ramu.getdata();

    mingu.setdata();
    mingu.getdata();

    ankur.setdata();
    ankur.getdata();

    return 0;
}