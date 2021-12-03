#include<iostream>
using namespace std;

class student{
  protected:
    int roll;
public:
     void setnumber(int a){
         roll = a;
     }
     void printnumber(){
         cout<<" your roll is "<<roll<<endl;
     }
};

class test : virtual public student{
   protected:
      float maths ,physics;
   public:
      void setmarks(float m1, float m2){
          maths = m1;
          physics= m2;
      }
       void printmarks(){
            cout<<"your result is here : "<<endl
                <<"maths : "<<maths<<endl
                <<"physics : "<<physics<<endl;
       }

};

class sports : virtual public student{
   protected :
       float PTscore;
       public:
         void setscore(float sc){
             PTscore = sc;
         }
         void printscore(){
             cout<<"your PT score is : " <<PTscore <<endl;
         }
};

class result: public test, public sports{
     private:
       float total;
       public:
       void display(){
           total = maths + physics+ PTscore;
           printnumber();
           printmarks();
           printscore();
           cout<<"your total score is "<<total<<endl;
       }
};
int main(){

    result r;
    r.setnumber(34);
    r.setmarks(78.8,45.7);
    r.setscore(8);
    r.display();
    
    return 0;
}