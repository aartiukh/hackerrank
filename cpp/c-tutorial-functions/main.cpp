#include <algorithm>
#include <cstdio>

int max_of_four(int a, int b, int c, int d)
{
    return std::max({a, b, c, d});
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    const int answer = max_of_four(a, b, c, d);
    printf("%d", answer);

    return 0;
}
