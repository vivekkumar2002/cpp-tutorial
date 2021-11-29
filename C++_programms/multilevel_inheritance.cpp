#include<iostream>
using namespace std;
class student{
  protected:
        int roll_number;
   public:
        void set_roll_number(int r){
            roll_number = r;
        }
        void get_roll_number(void){
            cout<<"The roll number is "<<roll_number<<endl;
        }     
};

class exam: public student{// protected member inherited publicly is also protected
     protected:
        float maths;
        float physics;
     public:
         void set_marks(float m1, float m2){
             maths = m1;
             physics = m2;
         }
         void get_marks(void){
             cout<<"the marks obtained in maths is : " <<maths<<endl;
             cout<<"the marks obtained in physics is : " <<physics<<endl;
         }
};

class result : public exam{
    float percentage;
    public:
         void display(){
             get_roll_number();
             get_marks();
             cout<<"your percentage is "<<(maths+physics)/2<<endl;
         }

};
int main(){
    result r;
    r.set_roll_number(420);
    r.set_marks(94,90);
    r.display();
    return 0;
}
