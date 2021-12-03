#include<iostream>
using namespace std;
class complex{
    public:
    complex(){
        a=0;
        b=0;
    }
    int a,b;
    complex(int x, int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void printnumber(){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }

};
int main(void) {
    complex c1 = complex(4,6);
    c1.printnumber();

    complex c2(5);
    c2.printnumber();
    complex c3;
    c3.printnumber();    
    return 0;
}