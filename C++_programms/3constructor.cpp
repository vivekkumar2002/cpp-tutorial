#include <iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    float percentage;
    student(int a, string b, float c)
    {
        id=a;
        name=b;
        percentage=c;
    }
    void display()
    {
        cout << id << " " << name << " " << percentage << endl;
    }
};
int main(void)
{
    student s1 = student(1, "ram", 100);
    student s2 = student(2, "shyam", 99);
    s1.display();
    s2.display();
    return 0;
}