#pragma once

#include <vector>
#include <stdexcept>

template <typename ItemType>
class Stack
{
    public:
        Stack();
        virtual ~Stack();

        void push(ItemType item);
        ItemType pop();
        ItemType top() const;
        bool isEmpty() const;

    private:
        std::vector<ItemType> items;

}; 