#include "search.h"

int binarySearch(const int items[], const int& itemCount, const int& value)
{
    bool valueFound{false};
    int leftBound{0},
        rightBound{itemCount-1},
        midpoint{};

    do {
        midpoint = leftBound + (rightBound - leftBound) / 2;

        if (value == items[midpoint])
            valueFound = true;
        else if (value > items[midpoint])
            leftBound = midpoint+1;
        else if (value < items[midpoint])
            rightBound = midpoint-1;

    } while (!valueFound && (leftBound <= rightBound));

    return valueFound ? midpoint : -1;
}

int binarySearch_recursive(const int items[], const int& itemCount, const int& value)
{
    int leftBound{0},
        rightBound{itemCount-1},
        midpoint{};

    return binarySearch_recursiveHelper(items, value, leftBound, rightBound, midpoint);
}

int binarySearch_recursiveHelper(const int items[], const int& value, int& leftBound,
                       int& rightBound, int& midpoint)
{
    midpoint = leftBound + (rightBound - leftBound) / 2;
    bool valueFound{false};

    if (leftBound > rightBound)
    {
        midpoint = -1;
        valueFound = true;
    }
    else
    {
        if (value == items[midpoint])
            valueFound = true;
        else if (value > items[midpoint])
            leftBound = midpoint+1;
        else if (value < items[midpoint])
            rightBound = midpoint-1;
    }

    return valueFound
            ? midpoint
            : binarySearch_recursiveHelper(items, value, leftBound, rightBound, midpoint);
}