#include <iostream>
int multiply(int a, int b)
{
    return a * b;
}
int subtract(int a, int b)
{
    return a - b;
}
int addition(int a, int b)
{
    return a + b;
}
void menu()
{
    std::cout << "Choose an option: \n";
    std::cout << "0. Exit\n";
    std::cout << "1. Add numbers\n";
    std::cout << "2. Subtract numbers\n";
    std::cout << "3. Multiply number\n";
}
int main()
{
    int a;
    int b;
    std::cout << "Enter first number: \n";
    std::cin >> a;
    std::cout << "Enter second number: \n";
    std::cin >> b;

    menu();

    int choice;
    std::cin >> choice;

    if (choice < 0 || choice > 3)
    {
        std::cout << "Error. Invalid syntaxю\n";
    }
    else if (choice == 0)
    {
        std::cout << "Goodbye :)\n";
    }
    else if (choice == 1)
    {
        std::cout << a << " + " << b << " = " << addition(a, b) << "\n";
    }
    else if (choice == 2)
    {
        std::cout << a << " - " << b << " = " << subtract(a, b) << "\n";
    }
    else if (choice == 3)
    {
        std::cout << a << " * " << b << " = " << multiply(a, b) << "\n";
    }

}