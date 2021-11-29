#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("samplefile.txt");
    out<<"this is me\n";
    out<<"ajju bhai\n";
    out.close();


    ifstream in;
    string st, st2;
    in.open("samplefile.txt");
    // in>>st>>st2;
    // cout<<st << st2;

    while(in.eof()==0 ){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}