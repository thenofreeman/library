#pragma once

int binarySearch(const int items[], const int& itemCount, const int& value);
int binarySearch_recursive(const int items[], const int& itemCount, const int& value);
int binarySearch_recursiveHelper(const int items[], const int& value, int& leftBound,
                       int& rightBound, int& midpoint);