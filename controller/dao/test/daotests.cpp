#include <gtest/gtest.h>
#include "../impl/excursiondaofileimpl.h"
#include <iostream>

TEST(ExcursionDaoFileTest, test1)
{
    ExcursionDao* dao = new ExcursionDaoFileImpl();
    std::vector<Excursion*> excursions = dao->getByDates("2023-10-15","");

    std::cout << "Texto";

    for(Excursion* excursion : excursions){
        std::cout << excursion;
        std::cout << std::endl;
    }

}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
