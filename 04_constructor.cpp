//constructor with default arguements.
#include<iostream>
using namespace std;
class simple{
    public:
    int data1;
    int data2;
    int data3;
    simple(int a, int b =9, int c=8){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata(){
        cout<<"the value of data1, data2 and data3 is "<<data1<<","<<data2<<" and " <<data3<<" respectively."<<endl;
    }
};

int main(){
    simple s(1);
    s.printdata();

    
    return 0;
}