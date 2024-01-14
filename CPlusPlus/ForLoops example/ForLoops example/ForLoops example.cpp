// Nested For Loops

#include <iostream>
#include <iomanip>

int main()
{
    //print table header
    std::cout << "    ";
    for (int i = 1; i <= 10; i++)
    {
        std::cout << std::setw(5) << i;
    }
    std::cout << "\n";

    //print multiplication table
    for (int i = 1; i <= 10; i++)
    {
        std::cout << std::setw(5) << i;
        for (int j = 1; j <= 10; j++)
        {
            std::cout << std::setw(5) << i * j;
        }
        std::cout << "\n";
    }
}




