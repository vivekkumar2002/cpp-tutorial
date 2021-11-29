#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st ="ajju bhai";
    string  st2;
    ofstream out("samplefile.txt");
    out<<st;
    // ifstream in("samplefile.txt");
    // // in>>st2;
    // getline(in, st2);
    // getline(in, st2);
    // cout<<st2;

    return 0;
}