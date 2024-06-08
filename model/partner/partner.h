#ifndef PARTNER_H
#define PARTNER_H
#include <string>

class Partner
{
protected:
    std::string id;
    std::string name;
public:
    Partner();
    virtual int discount() = 0;
};

#endif // PARTNER_H
