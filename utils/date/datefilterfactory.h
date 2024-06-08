#ifndef DATEFILTERFACTORY_H
#define DATEFILTERFACTORY_H
#include "datefilter.h"
#include <string>

class DateFilterFactory
{
public:
    DateFilterFactory();
    DateFilter* getFilter(std::string startDate,
                         std::string endDate);
};

#endif // DATEFILTERFACTORY_H
