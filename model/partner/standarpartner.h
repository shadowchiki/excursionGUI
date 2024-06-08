#ifndef STANDARPARTNER_H
#define STANDARPARTNER_H
#include "partner.h"
#include "../secure.h"

class StandarPartner : Partner
{
private:
    std::string nif;
    Secure* secure;
public:
    StandarPartner();
    int discount();
};

#endif // STANDARPARTNER_H
