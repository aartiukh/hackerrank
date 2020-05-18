#include <iostream>
#include <vector>

int main()
{
    size_t n = 0;
    size_t q = 0;
    std::cin >> n >> q;

    std::vector<std::vector<int>> a(n);

    for (size_t i = 0u; i < n; ++i)
    {
        size_t k = 0u;
        std::cin >> k;

        a[i].resize(k);

        for (size_t j = 0u; j < k; ++j)
        {
            std::cin >> a[i][j];
        }
    }

    for (size_t k = 0u; k < q; ++k)
    {
        size_t i = 0u;
        size_t j = 0u;
        std::cin >> i >> j;

        std::cout << a[i][j] << std::endl;
    }

    return 0;
}
