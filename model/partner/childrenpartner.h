#ifndef CHILDRENPARTNER_H
#define CHILDRENPARTNER_H
#include "partner.h"

class ChildrenPartner : Partner
{
private:
    Partner* parent;
public:
    ChildrenPartner(Partner* parent);
    int discount();
};

#endif // CHILDRENPARTNER_H
