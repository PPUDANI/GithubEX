#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "akab on naseno";
    string revstr = "";
    int strlen = str.length();
    cout << str.length() << endl;
    
    for(int i = 0; i < strlen; i++)
    {
        cout << str[strlen - i - 1];
    }
}