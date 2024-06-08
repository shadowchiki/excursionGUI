cmake_minimum_required(VERSION 3.16)

project(ExcursionsGUI VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appExcursionsGUI
    main.cpp
    model/partner/partner.h model/partner/partner.cpp
    model/partner/standarpartner.h model/partner/standarpartner.cpp
    model/partner/federatedpartner.h model/partner/federatedpartner.cpp
    model/partner/childrenpartner.h model/partner/childrenpartner.cpp
    model/secure.h model/secure.cpp
    model/federation.h model/federation.cpp
    model/inscription.h model/inscription.cpp
    controller/excursioncontroller.h controller/excursioncontroller.cpp
    filedb/excursions.txt
)

qt_add_qml_module(appExcursionsGUI
    URI ExcursionsGUI
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES view/excursionview.h view/excursionview.cpp
)

add_subdirectory(utils/date/)
add_subdirectory(utils/date/test)
add_subdirectory(controller/dao/)
add_subdirectory(controller/dao/test)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appExcursionsGUI PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appExcursionsGUI
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appExcursionsGUI
    PRIVATE Qt6::Quick
    PRIVATE dateutils
    PRIVATE dao
)

include(GNUInstallDirs)
install(TARGETS appExcursionsGUI
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
