/*
Multi Line Comment
*/

#include <iostream> // Location matters and is restricted to the curly bracket space

int power(double, int); // Function Declaration Only -> Useful so you can place you function anywhere without worrying about compile errors

int power(double base, int exponent) // Function Decalaration and Initialization
{
    double result =1;

    for(int i = 0; i<exponent; i++){
        result = result*base;
    }
    return result;
}

int add(int x, int y) // Function Decalaration and Initialization
{
   return x+y;
}

int main() // Executor First Called Automatically
{
    int guava;
    int mango, dragonfruit;
    int fruit1= 0;
    int fruit2=0;
    int cookies = 10; // Declaration and Initialization


    int melons; // Declaration  
    melons = 20; // Initialization


    std::cout << "Test\n"; // std -> Standard Library

    std::cout << "Input Guava Numbers\n"; 
    std::cin >> guava;   

    std::cout << "Fruit 1 and Fruit2\n";
    std::cin >> fruit1; 
    std::cin >> fruit2;    
    std::cout << "Fruits added are: "<< add(fruit1, fruit2) << std::endl;

    int fruit_addition = add(fruit1, fruit2);
    printf("%i fruit_addition\n", fruit_addition); // Requires iostream

    std::cout << "Melon amount: "<< melons << std::endl;

    printf("Melons with printf: %i \n", melons); // Requires iostream
    printf("Power function %d \n",power(fruit1,fruit2));
    std::cout << "Test2 \n";

    return 0; 
}

void tests() 
{
    std::cout << "Cookies???\n"; 
}
//----------------------------------------------------------------------------------
// V2 Using Namespace for Global Removal -> Not Recommended for large code bases
//----------------------------------------------------------------------------------

int main2() 
{   
    using namespace std;
    cout << "Test\n"; 
    return 0; 
}

//----------------------------------------------------------------------------------
// V3 Using Namespace for Global Removal -> Can be used and is safer then v2 
//----------------------------------------------------------------------------------

int main3() 
{
    using std::cout;
    cout << "Test\n"; 
    return 0; 
}