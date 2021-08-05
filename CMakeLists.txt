cmake_minimum_required(VERSION 3.20)
project(enginePlusPlus)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(enginePlusPlus main.cpp GameObject.cpp GameObject.h Transform.cpp Transform.h Vector.cpp Vector.h)

target_link_libraries(enginePlusPlus sfml-graphics sfml-audio)
