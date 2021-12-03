#include<iostream>
using namespace std;

class employee{//----> base class    
     public:
     int id;
     float salary;
         employee(int inpid){
             id = inpid;
             salary = 34.0;
         }
         employee(){}
};
// private members will never be inherited.
class programmer : public employee{//----->derived class ------>default visibility mode is private
public:
programmer(int inpid){
    int languagecode;
    id = inpid;
}
    int languagecode =9;
    void getdata(){
        cout <<id<<endl;
    }
};
int main(){
    employee ram(1),shyam(2);
    cout<<ram.salary<<endl;
    cout<<shyam.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    cout<<skillf.id<<endl;
    skillf.getdata();
    return 0;
}