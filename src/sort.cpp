#include "search.h"

void bubbleSort(int items[], const int& itemcount)
{
    for (int low{0}; low < itemcount-1; ++low)
    {
        for (int min{0}; min < itemcount-low-1; ++min)
        {
            if(items[min] > items[min+1])
            {
                int temp = items[min];
                items[min] = items[min+1];
                items[min+1] = temp;
            }
        }
    }
}

void selectionSort(int items[], const int& itemcount)
{
    int min{0};
    for (int low{0}; low < itemcount-1; ++low) {
        min = low;
        for (int cur{low+1}; cur < itemcount; ++cur) {
            if (items[cur] < items[min]) {
                min = cur;
            }
        }
        int temp = items[low];
        items[low] = items[min];
        items[min] = temp;
    }
}