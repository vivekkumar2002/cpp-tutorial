#include<iostream>
using namespace std;
typedef struct employee
{
    int eID;
    char favchar;
    float salary;
} ep;

int main(){
    ep vivek;
    vivek.eID = 7;
    vivek.favchar = 'v';
    vivek.salary = 100000;
    cout<<"the value is "<<vivek.salary<<endl;
    cout<<"the value is "<<vivek.favchar<<endl;
    cout<<"the value is "<<vivek.eID<<endl;
    


    
    return 0;
}