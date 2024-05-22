---
title: Stack
category: Data Structure
layout:
---

# Stack

## Introduction

A stack is an abstract data type that can hold a list of items. 

With a stack, only the last element added to the list is accessable. That means, in order to access some particular element, you must first remove all the elements added after it.

## Use Cases

...

## Performance

...

## Implementation

In the following code we implement a stack that can hold any data type.

To simplify things we will use a dynamically allocated array ([std::vector]) so that there is no reasonable limit to how large are stack can be.

---Stack.h
```C++
...
```

---Stack.cpp
```C++
...
```

## Using our Implementation

---main.cpp
```C++
#include <iostream>

#include "Stack.h"

int main(int argc, char const *argv[])
{
    Stack<int> intStack;

    stack.push(100);
    std::cout << "Top of stack: " << stack.top() << std::endl;
    std::cout << "Popped value: " << stack.pop() << std::endl;
    std::cout << "Is stack empty: " << (stack.isEmpty() ? "YES" : "NO") << std::endl;

    return 0;
}
```

## Testing

## Final Notes

Keep in mind:
- Using template arguments means you must compile your header files.
- Apart from being a good exercise, creating your own version of some data structure or algorithm is often unnecessary and generally worse performance-wise than what the standard library already has implemented. 

Unless you require a highly customized Stack object, consider using [std::stack], and learn [how to use the standard library effectively].

## Supplementary Resources
