#ifndef BETWEENDATEFILTER_H
#define BETWEENDATEFILTER_H
#include "datefilter.h"

class BetweenDateFilter : public DateFilter
{
public:
    BetweenDateFilter(std::string startDate,
                      std::string endDate);
    bool filter(std::string date);
};

#endif // BETWEENDATEFILTER_H
