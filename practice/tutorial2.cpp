#include <iostream> // Location matters and is restricted to the curly bracket space

void main() // Executor First Called
{
    int melons; // Declaration  
    melons = 20; // Initialization

    auto mango=43; // Automatically assigns variable (default double)
    auto mangou=43ULL; // Automatically assigns variable with unisgned long long
    auto mangof=43.0F; // Automatically assigns variable as float

    printf("%i asdasd\n", melons);
    printf("%i mango\n", mango);
    printf("%i mangou\n", mangof); 

    int number = 30; // Base 10
    int number_hex = 0x30; // base 16
    int number_oct = 030; // base 8

    std::cout << number << std::endl;
    std::cout << number_hex << std::endl;
    std::cout << number_oct << std::endl;
    
    std::cout << std::hex <<number << std::endl;
    std::cout << std::oct <<number << std::endl;
}