#include <iostream>
#include <limits>
#include <string>
#include <vector>

int main()
{

    size_t a = 0u;
    size_t b = 0u;
    std::cin >> a >> b;

    const std::vector<std::string> numbers = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (size_t i = a; i <= b; ++i)
    {
        if (i <= 9)
        {
            std::cout << numbers[i - 1] << std::endl;
        }
        else if (i % 2 == 0)
        {
            std::cout << "even" << std::endl;
        }
        else
        {
            std::cout << "odd" << std::endl;
        }
    }

    return 0;
}
