#include <iostream>

int main()
{
    const size_t MAX_ARRAY_SIZE = 1000;

    size_t array[MAX_ARRAY_SIZE];
    size_t N = 0u;

    std::cin >> N;

    for (size_t i = 0; i < N; ++i)
    {
        std::cin >> array[N - 1 - i];
    }

    for (size_t i = 0; i < N; ++i)
    {
        std::cout << array[i] << " ";
    }

    return 0;
}
