#ifndef ITEM_H
#define ITEM_H

#include "pentagon.h"

class Item {
public:
    Item(void *ptr);

    Item* to_right(Item* next);
    Item* Next();
    void* GetItem();

    virtual ~Item();
private:
    void* link;
    Item* next;
};

#endif // ITEM_H