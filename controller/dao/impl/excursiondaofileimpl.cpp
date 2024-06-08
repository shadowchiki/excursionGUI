#include "excursiondaofileimpl.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "../../../utils/date/datefilterfactory.h"
using namespace std;

ExcursionDaoFileImpl::ExcursionDaoFileImpl() {
}

std::shared_ptr<Excursion> ExcursionDaoFileImpl::getById(std::string& id){
    std::ifstream file("/home/alejandro/Workspace/cpp/ExcursionsGUI/filedb/excursions.txt");
    string line;
    std::shared_ptr<Excursion> excursion;
    bool finded = false;
    if(file.is_open()){
        while(std::getline(file, line) && !finded){
            excursion = map(line);
            if(excursion && excursion->getId() == id){
                finded = true;
            }
        }
        file.close();
    }
    return excursion;
}

std::shared_ptr<Excursion> ExcursionDaoFileImpl::map(string& line){
    stringstream stream(line);
    vector<string> excursionData;
    string value;
    while(getline(stream, value, ';')){
        excursionData.push_back(value);
    }
    Excursion excursion (excursionData.at(0), excursionData.at(1), excursionData.at(2), stol(excursionData.at(3)), stoi(excursionData.at(4)));
    return std::make_shared<Excursion>(excursion);
}

vector<Excursion*> ExcursionDaoFileImpl::getByDates(string startDate, string endDate){
    ifstream file("/home/alejandro/workspace/cpp/excursions/filedb/excursions.txt");

    string line;
    vector<Excursion*> excursions;
    if(!file.is_open()){
        return excursions;
    }

    while(file){
        getline(file, line);
        //excursions.push_back(map(line));
    }
    DateFilterFactory factory;
    DateFilter* filter = factory.getFilter(startDate, endDate);
    if(filter == nullptr){
        return excursions;
    }

    vector<Excursion*> excursionsFilter;
    for(Excursion* excursion: excursions){
        if(filter->filter(excursion->getDate())){
            excursionsFilter.push_back(excursion);
        }
    }

    return excursionsFilter;
}

vector<Excursion*> ExcursionDaoFileImpl::filterByDate(std::string startDate, std::string endDate){
    return vector<Excursion*> {};
}

void ExcursionDaoFileImpl::add(Excursion* excursion){

}
