#include<iostream>
using namespace std;
class code{
    protected:
       string title;
       float rating;
    public:
        code(string s, float r){
            title=s;
            rating =r;
        }
        virtual void display(){

        }

};

class codevideo: public code{
    int videolength;
    public:
    codevideo(string s, float r, float vl): code(s,r){
        videolength = vl;
    }
    void display(){
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"this video is rating "<<rating<<" out of 5 stars "<<endl;
        cout<<"length of this video is "<<videolength<<" minutes"<<endl;
    }
    };

class codetext:public code{
    int words;
    public:
       codetext(string s,float r, int wc):code(s,r){
           words = wc;
       }
       void display(){
        cout<<"this is an amazing text tutorial with title "<<title<<endl;
        cout<<"rating of this text tutorial is "<<rating<<" out of 5 stars "<<endl;
        cout<<"no. of word in this text tutorial is  "<<words <<" words"<<endl;
    }

};
int main(){
    string title;
    float rating,vlen;
    int words;


    title = "django tutorial";
    vlen = 4.76;
    rating = 4.87;
    codevideo djvideo(title, rating, vlen);
    djvideo.display();

    codetext djtext(title, rating, words);
    djtext.display();

    code* tuts[2];
    tuts[0]= &djvideo;
    tuts[1]= &djtext;

    tuts[0]->display();
    tuts[1]->display();
    
    return 0;
}