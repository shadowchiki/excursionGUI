#include "enddatefilter.h"

EndDateFilter::EndDateFilter(std::string endDate): DateFilter("", endDate)
{
    this->endDate = endDate;
}

bool EndDateFilter::filter(std::string date)
{
    return this->dateUtils.after(date, endDate);
}
