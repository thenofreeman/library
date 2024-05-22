#include "Stack.h"

template <typename ItemType>
Stack<ItemType>::Stack() 
{ 
    // nothing to do -- std::vector handles initialization.
}

template <typename ItemType>
Stack<ItemType>::~Stack() 
{ 
    // nothing to do -- std::vector handles deallocation.
}

template <typename ItemType>
void Stack<ItemType>::push(ItemType item) 
{ 
    items.push_back(item);
}

template <typename ItemType>
ItemType Stack<ItemType>::pop() 
{ 
    if (items.empty())
        throw std::out_of_range("Attemping to pop from an empty stack.");

    ItemType poppedItem = items.back();
    items.pop_back();

    return poppedItem;
}

template <typename ItemType>
ItemType Stack<ItemType>::top() const
{ 
    if (items.empty())
        throw std::out_of_range("Attemping to read from an empty stack.");

    return items.back(); 
}

template <typename ItemType>
bool Stack<ItemType>::isEmpty() const
{
    return items.empty();
}