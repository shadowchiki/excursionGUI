#ifndef EXCURSIONCONTROLLER_H
#define EXCURSIONCONTROLLER_H
#include <vector>
#include "dao/excursiondao.h"
#include <memory>

class ExcursionController
{
private:
    std::unique_ptr<ExcursionDao> dao;

public:
    ExcursionController();
    ~ExcursionController();

    void add(Excursion* excursion);
    std::vector<Excursion*> getByDates(std::string startDate, std::string endDate);
    std::shared_ptr<Excursion> getById(std::string id);
};

#endif // EXCURSIONCONTROLLER_H
