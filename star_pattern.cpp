// #include <iostream>
// using namespace std;
// int main()
// {
// for(int i=1; i<=5;i++){
    
//     for(int j=5; j>=i;j--){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1; i<=5; i++){
        for(k=5-i; k<=5; k++){
          cout<<" ";
        }
        for(j=5; j>=i;j--){
            cout<<" $";
        }
        cout<<endl;
    }
    return 0;
}