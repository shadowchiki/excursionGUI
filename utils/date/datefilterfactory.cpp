#include "datefilterfactory.h"
#include "startdatefilter.h"
#include "enddatefilter.h"
#include "betweendatefilter.h"

DateFilterFactory::DateFilterFactory()
{

}

DateFilter* DateFilterFactory::getFilter(std::string startDate, std::string endDate){

    if(!startDate.empty() && !endDate.empty()){
        return new BetweenDateFilter(startDate, endDate);
    } else if(!startDate.empty() && endDate.empty()){
        return new StartDateFilter(startDate);
    } else if(!endDate.empty() && startDate.empty()){
        return new EndDateFilter(endDate);
    }

    return nullptr;

}
