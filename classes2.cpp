#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int id;
    float marks;
    



};

int main(){
    student s1;
    s1.name ="vivek" ;
    s1.id = 1;
    s1.marks = 33.5;

    cout<<"the name of student is " <<s1.name<<endl;
    cout<<"the id of student is " <<s1.id<<endl;
    cout<<"the marks of student is "<<s1.marks<<endl;


    
    
    return 0;
}