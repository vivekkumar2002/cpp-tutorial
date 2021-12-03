#include <iostream>
#include <map>
#include <string>
using namespace std;

// map is an associative array
int main()
{
    map<string, int> marksmap;
    marksmap["vivek"] = 89;
    marksmap["mingu"] = 59;
    marksmap["ramesh"] = 9;

    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    return 0;
}