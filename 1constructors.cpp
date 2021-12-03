// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:
/*creating a constructor
 constructor is a special number function with same name as of the class, it is
 automaticaly invoked(called) whenever an object is created.
 it is used to initialize the object of the .*/
//  complex(void);  // constructor decelaration
// void printnumber(){
//     cout <<" your number is " << a << " + "<< b <<"i"<<endl;
// }
// };

// complex :: complex(void){ //default constructor
//     a= 10;
//     b=0;
// }
// int main(){
//     complex c;
//     c.printnumber();
    
//     return 0;
// }

#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2;   
    return 0;  
} 