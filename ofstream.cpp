#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream hout("samplefile.txt");
    cout<<"enter your name"<<endl;
    string name;
    cin>>name;
    hout<<"my name is "+ name;
    hout.close();
    


    // ifstream hin("samplefile.txt");
    // string content;
    // hin>>content;
    // cout<<"the content of this file is "<<content;
    return 0;
}