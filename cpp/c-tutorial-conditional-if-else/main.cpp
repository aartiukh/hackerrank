#include <iostream>
#include <limits>
#include <vector>

int main()
{
    size_t n = 0u;
    std::cin >> n;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    const std::vector<std::string> number = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n <= 9)
    {
        std::cout << number[n - 1];
    }
    else
    {
        std::cout << "Greater than 9";
    }

    return 0;
}
