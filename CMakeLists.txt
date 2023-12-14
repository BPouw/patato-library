cmake_minimum_required(VERSION 3.27)
project(potato_library)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

add_library(potato_library STATIC
        PotatoClassifier.cpp
        PotatoClassifier.h
        Prediction.cpp
        Prediction.h
        PotatoClass.cpp
        PotatoClass.h)

target_include_directories(potato_library PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(potato_library PRIVATE ${OpenCV_LIBS})