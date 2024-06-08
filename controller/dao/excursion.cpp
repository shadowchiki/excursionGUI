#include "excursion.h"
#include <iostream>

Excursion::Excursion()
{

}

Excursion::Excursion(std::string id,
                     std::string description,
                     std::string date,
                     long price,
                     int durationDays): id(std::move(id)), description(std::move(description)), date(std::move(date)), price(price), durationDays(durationDays)
{
}

std::string Excursion::getId()
{
    return this->id;
}

std::string Excursion::getDate()
{
    return this->date;
}
