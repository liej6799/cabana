cmake_minimum_required(VERSION 3.26)
project(cabana)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(cabana
        cabana/cabana.cc
        cabana/mainwin.cc
        cabana/mainwin.h)

target_link_libraries(cabana Qt5::Widgets)