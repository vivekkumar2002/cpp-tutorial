#include<iostream>
using namespace std;
typedef struct employee
{
    int eID;
    char favchar;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    ep vivek;
    union money m1;
    m1.rice = 34;
    // m1.car ='c';


    // vivek.eID = 7;
    // vivek.favchar = 'v';
    // vivek.salary = 100000;
    // cout<<"the value is "<<vivek.salary<<endl;
    // cout<<"the value is "<<vivek.favchar<<endl;
    // cout<<"the value is "<<vivek.eID<<endl;
    cout<<m1.rice;
    


    
    return 0;
}