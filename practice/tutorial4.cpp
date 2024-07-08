#include <iostream>

void main() 
{
    bool cookie=true; // false
    bool cookies=1; // Anything other than 0 is True


    std::cout << std::boolalpha << cookies<< std::endl; // bool alpha print true or false instead of 0 or 1

    if (cookies)
    {
        std::cout << "hello \n";
    }


    /*
    \0 non-terminating code
    \a beep sound -> doesnt play in vs code
    \t tab
    \n newline
    \v Vertical Space
    \b backspace
    */
    std::cout << "\a t cookie\n cookie\b";
}


