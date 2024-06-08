#include "startdatefilter.h"

StartDateFilter::StartDateFilter(std::string startDate) : DateFilter(startDate, "")
{
    this->startDate = startDate;
}

bool StartDateFilter::filter(std::string date){
    return dateUtils.after(date, startDate);
}
