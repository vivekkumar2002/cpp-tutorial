#include<iostream>
using namespace std;

int main(){
   int marks[5] = {20,30,40,50,60};
//    marks[2] = 46;// you can change the value of an array
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
      for (int i =0; i<=4; i++){
          cout<<"the value of marks "<<i<< " is "<<marks[i]<<endl;
      }

    return 0;
}