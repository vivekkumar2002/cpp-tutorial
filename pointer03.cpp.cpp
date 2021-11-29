#include<iostream>
using namespace std;
class baseclass{
    public:
    int var1;
    void display(){
        cout<<"displaying baseclass variable var1 "<<var1<<endl;
    }
};

class derivedclass: public baseclass{
     public:
    int var2;
    void display(){
        cout<<"displaying baseclass variable var1 "<<var1<<endl;
        cout<<"displaying derivedclass variable var2 "<<var2<<endl;
    }
};
int main(){
    baseclass *baseclasspointer;
    baseclass objbase;
    derivedclass objderived;
    baseclasspointer = &objderived;

    baseclasspointer->var1=45;
    baseclasspointer->display();

    return 0;
}