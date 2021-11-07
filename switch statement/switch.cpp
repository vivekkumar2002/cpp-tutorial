#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age ";
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "you are 12 years old"<<endl;
        break;
    case 18:
        cout << "you are 18 years old"<<endl;

    default:
        cout << "you are neither 12 nor 18 years old";
    }
}