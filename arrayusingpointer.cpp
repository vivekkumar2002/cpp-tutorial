// array of objects using pointers
#include <iostream>
using namespace std;
class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};
int main()
{
    int size = 2;
    int p, i;
    float q;
    shopitem *ptr = new shopitem[size]; // memory allocation
    shopitem *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "enter id and price of item" << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "item number " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}