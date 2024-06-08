#ifndef ENDDATEFILTER_H
#define ENDDATEFILTER_H
#include "datefilter.h"

class EndDateFilter : public DateFilter
{
public:
    EndDateFilter(std::string endDate);
    bool filter(std::string date);
};

#endif // ENDDATEFILTER_H
