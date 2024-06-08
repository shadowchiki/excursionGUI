#ifndef EXCURSION_H
#define EXCURSION_H
#include <string>

class Excursion
{
private:
    std::string id;
    std::string description;
    std::string date;
    long price;
    int durationDays;

public:
    Excursion();
    Excursion(std::string id,
              std::string description,
              std::string date,
              long price,
              int durationDays);
    ~Excursion() = default;
    std::string getId();
    std::string getDate();

};

#endif // EXCURSION_H
