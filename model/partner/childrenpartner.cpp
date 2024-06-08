#include "childrenpartner.h"

ChildrenPartner::ChildrenPartner(Partner* parent)
{
    this->parent = parent;
}

int ChildrenPartner::discount(){
    return 50;
}
