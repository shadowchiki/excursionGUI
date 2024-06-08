cmake_minimum_required(VERSION 3.5)

add_library(dao
    excursion.h excursion.cpp
    excursiondao.h
    impl/excursiondaofileimpl.cpp
    impl/excursiondaofileimpl.h

)

target_link_libraries(dao PRIVATE dateutils)
