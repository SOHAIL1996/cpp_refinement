#include <iostream>
#include <cmath> // Math functions

using std::cout;
using std::endl;

void main() 
{

    // Cmath useful tools
    cout << INFINITY << endl;
    cout << -INFINITY << endl;
    cout << NAN << endl;

    cout << sqrt(25)<<endl;
    cout << 10%3 <<endl; // Doesnt deal with floats
    cout << remainder(10,3.25) <<endl;
    cout << fmod(10,3.25) <<endl; // Rounding vs truncation
    cout << pow(9,100)<<endl; // Power function
    cout << fmax(9,100)<<endl; // Return highest number
    cout << fmin(9,100)<<endl; // Return lowest number
    cout << round(4.766)<<endl; // Round off to closest value
    cout << ceil(4.766)<<endl; // Round off to higher value
    cout << floor(4.766)<<endl; // Round off to lower value
    cout << trunc(4.766)<<endl; // Cut off decimal value - Difference in -ve values
}