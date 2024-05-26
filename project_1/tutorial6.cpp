#include <iostream>
#include <string>

using namespace std;

void main() 
{
    // std is mandatory it would be std::string normally
    string gtt = "lol"; // string is empty by default no error
    gtt += "!"; 
    string user_input;

    cout << gtt << endl;
    cout << gtt.length() << endl;
    cout << gtt [1] << endl;
    cout << gtt + " remove" << endl; // directly add

    cin >> user_input; // Gets only the first word                                                                             

    char string_variable[]="cookies"; // Can also use array technique -> This is c style, size cant be changed
    cout << string_variable << endl;
}