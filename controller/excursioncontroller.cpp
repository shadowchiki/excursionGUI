#include "excursioncontroller.h"
#include "dao/impl/excursiondaofileimpl.h"
#include <iostream>

ExcursionController::ExcursionController()
{
    ExcursionDaoFileImpl daoImpl;
    dao = std::make_unique<ExcursionDaoFileImpl>(daoImpl);
}

ExcursionController::~ExcursionController(){
}

void ExcursionController::add(Excursion* excursion){
    /*Excursion* finded = this->dao->getById(excursion->getId());

    if(finded != nullptr){
        this->dao->add(excursion);
    }*/
}

std::vector<Excursion *> ExcursionController::getByDates(std::string startDate, std::string endDate)
{
    return this->dao->getByDates(startDate, endDate);
}

std::shared_ptr<Excursion> ExcursionController::getById(std::string id)
{
    return this->dao->getById(id);
}
