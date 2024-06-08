#ifndef EXCURSIONDAO_H
#define EXCURSIONDAO_H
#include "excursion.h"
#include <string>
#include <vector>
#include <memory>

class ExcursionDao
{
public:
    ExcursionDao() = default;
    virtual ~ExcursionDao() = default;
    virtual std::shared_ptr<Excursion> getById(std::string& id) = 0;
    virtual std::vector<Excursion*> getByDates(std::string startDate, std::string endDate) = 0;
    virtual void add(Excursion* excursion) = 0;
};

#endif // EXCURSIONDAO_H
