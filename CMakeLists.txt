cmake_minimum_required(VERSION 3.26)
project(tusk1)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/GreenCircle.png ${CMAKE_CURRENT_BINARY_DIR}/GreenCircle.png COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/red.png ${CMAKE_CURRENT_BINARY_DIR}/red.png COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/yellow.png ${CMAKE_CURRENT_BINARY_DIR}/yellow.png COPYONLY)

set(CMAKE_PREFIX_PATH "C://Qt//Qt5.12.12//5.12.12//mingw73_64//lib//cmake")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(tusk1 main.cpp
        class.h
        class.cpp)
target_link_libraries(tusk1
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)


