#include <iostream>
#include <climits>
#include <float.h> // Check the trust worthy of the digits of float

#define X 45 // defines constant read only variable globally 

void tests() 
{
    std::cout << "Cookies???\n"; 
}

int main() 
{
    char x = 'A';  // It has to be single quotes
    std::cout << x << std::endl;
    std::cout << (int) x << std::endl; // Casting it into integer -> Based on the ascii table

    char y = 65;  // Example of using ascii -> Max character is till 128 -> Large numbers go back to the smallest
    std::cout << y << std::endl;

    unsigned char z = 'A';  // It has to be single quotes
    std::cout << z << std::endl;

    // Symbolic constants
    const int ops =5; // Read only variable
    enum {yytr = 50}; // Another way of constant
 
    // for integral numbers -> signed is for + & - 
    signed short a= 23; // 16bits or 32bits -> 2bytes
    int b= 0; //32bits+ -> 4bytes
    long c= 0; //64bits+ -> 4bytes
    long long d= 0; 

    // Unsigned allows only positive value
    unsigned short aa= 0;
    unsigned int bb= 0;
    unsigned long cc= 0;
    unsigned long long dd= 0;

    std::cout << "This is in bytes " << sizeof(a) << sizeof(b) << sizeof(c) << sizeof(d) << std::endl;

    // ?
    float ii; // Trust worthy until
    double iii = 77000; // 7.7E4 Always use double and not float, float is only for memory
    double iv = 7.7E4; // 7.7E4
    long double iiiiii;


    std::cout << iv << std::endl;

    std::cout << FLT_DIG << std::endl; // From float.h library to check reliability
    std::cout << DBL_DIG << std::endl; 
    std::cout << LDBL_DIG << std::endl; 

    // Extreme Percision required is obtained from libraries!!!!!!!!!!!!!!!

}


