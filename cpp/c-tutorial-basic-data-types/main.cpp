#include <cstdio>

int main()
{

    int    a = 0;
    long   b = 0;
    char   c = 0;
    float  d = 0.f;
    double e = 0.;

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d \n%ld \n%c \n%.3f \n%.9lf", a, b, c, d, e);

    return 0;
}
