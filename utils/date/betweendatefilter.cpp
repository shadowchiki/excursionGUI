#include "betweendatefilter.h"

BetweenDateFilter::BetweenDateFilter(std::string startDate, std::string endDate) : DateFilter(startDate, endDate)
{
    this->endDate = endDate;
    this->startDate = startDate;
}

bool BetweenDateFilter::filter(std::string date)
{
    return this->dateUtils.between(date, startDate, endDate);
}
