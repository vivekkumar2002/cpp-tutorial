#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"using function with 2 arguements "<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"using function with 3 arguements"<<endl;
    return a+b+c;
}

//calculate the volume of the cylinder
int volume(double r, int h){
    return(3.14*r*r*h);
}

//calculate the volume of the cube
int volume(int a){
    return(a*a*a);
}

//rectangular box
int volume(int l, int b, int h){
    return(l*b*h);
}

int main(){
    cout<<"the sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"the sum of 3,7 and 6 is "<<add(3,7,6)<<endl;
    cout<<"the volume of cuboid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"the volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"the volume of rectangular box of length 3, breadth 4 and height 5 is "<<volume(3,4,5)<<endl;
    
    
    return 0;
}