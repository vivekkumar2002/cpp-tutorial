// #include<iostream>
// using namespace std;
// class complex{
// int a,b;
//   public:
//       complex(void);
//       void display(){
//           cout<<"the number is "<< a <<" + "<<b<<"i"<<endl;
//       }   
// };

// complex ::complex(void)
// {
//     a =0;
//     b=0;
// }

// int main(){
//     complex a;
//     a.display();
    
//     return 0;
// }
#include <iostream>
using namespace std;
class Employee {
   public:
       int id;//data member (also instance variable)    
       string name;//data member(also instance variable)
       float salary;
       Employee(int i, string n, float s)  
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};
int main(void) {
    Employee e1(101, "Sonoo", 890000);  //creating an object of Employee 
    Employee e2(102, "Nakul", 59000);
    e1.display();  
    e2.display();  
    return 0;
}
