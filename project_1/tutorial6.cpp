#include <iostream>
#include <string>

using namespace std;

void main() 
{
    // std is mandatory it would be std::string normally
    string gtt = "lol"; // string is empty by default no error
    gtt += "!"; 
    string user_input;
    string user_input2;

    cout << gtt << endl;
    cout << gtt.length() << endl; 
    cout << gtt.size() << endl; // Same as length 
    cout << gtt [1] << endl;
    cout << gtt + " remove" << endl; // directly add
    gtt+=" cookies"; // Directly modifies the string
    gtt.append(" two cookies"); // Same like append
    gtt.erase(2,1); // Erase character in provided indexes 
    gtt.erase(2,1); // Erase all characters after this index
    gtt.erase(gtt.length()-1); // Erase last character
    gtt.replace(0,2,"repplla"); // Replace character from index to index
    gtt.insert(2," noiice "); // Inserts character in provided index 
    cout << gtt << endl;

    // cin >> user_input; // Gets only the first word                                                                             

    char string_variable[]="cookies"; // Can also use array technique -> This is c style, size cant be changed
    cout << string_variable << endl;

    getline(cin, user_input2); // Gets line
    cout << user_input2 << endl;
}