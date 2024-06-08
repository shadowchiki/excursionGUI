#ifndef EXCURSIONDAOFILEIMPL_H
#define EXCURSIONDAOFILEIMPL_H

#include "../excursiondao.h"

class ExcursionDaoFileImpl : public ExcursionDao
{
private:
    const std::string FILE_ROUTE = "/home/alejandro/workspace/cpp/excursions/filedb/excursions.txt";
    std::shared_ptr<Excursion> map(std::string& line);
    std::vector<Excursion*> filterByDate(std::string startDate, std::string endDate);
public:
    ExcursionDaoFileImpl();
    ~ExcursionDaoFileImpl() = default;
    std::shared_ptr<Excursion> getById(std::string& id) override;
    std::vector<Excursion*> getByDates(std::string startDate, std::string endDate) override;
    void add(Excursion* excursion) override;
};

#endif // EXCURSIONDAOFILEIMPL_H
