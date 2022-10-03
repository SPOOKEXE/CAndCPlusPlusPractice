cmake_minimum_required(VERSION 3.23)
project(C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(3_OOP/24_AdvancedOOPHeader)

add_executable(C__
        3_OOP/24_AdvancedOOPHeader/main.cpp
        3_OOP/24_AdvancedOOPHeader/vehicle.cpp
        3_OOP/24_AdvancedOOPHeader/vehicle.h 4_Implementations/26_HashMap/HashMap.h 4_Implementations/26_HashMap/HashNode.h 4_Implementations/26_HashMap/KeyHash.h 4_Implementations/26_HashMap/tester.cpp)
