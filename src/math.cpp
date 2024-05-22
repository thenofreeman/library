#include "math.h"

#include <stdexcept>

int factorial(const int& num)
{
    if (num < 0)
        throw std::invalid_argument("Argument to factorial() must be non-negative.");

    int fact{1};
    int i{1};

    while (i <= num)
        fact *= i++;

    return fact;
}

int factorial_recursive(const int& num)
{
    if (num < 0)
        throw std::invalid_argument("Argument to factorial() must be non-negative.");

    return factorial_recursiveHelper(num);
}

int factorial_recursiveHelper(const int& num)
{
    if (num == 0)
        return 1;

    return num * factorial_recursiveHelper(num-1);
}