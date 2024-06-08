#ifndef DATEFILTER_H
#define DATEFILTER_H
#include <string>
#include "dateutils.h"

class DateFilter
{
protected:
    DateUtils dateUtils;
    std::string startDate;
    std::string endDate;

public:
    DateFilter(std::string startDate,
               std::string endDate);
    virtual bool filter(std::string date) = 0;
};

#endif // DATEFILTER_H
