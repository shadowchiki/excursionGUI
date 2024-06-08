#ifndef FEDERATEDPARTNER_H
#define FEDERATEDPARTNER_H
#include "partner.h"
#include "../secure.h"

class FederatedPartner : Partner
{
private:
    std::string nif;
    Secure* secure;

public:
    FederatedPartner();
    int discount();
};

#endif // FEDERATEDPARTNER_H
