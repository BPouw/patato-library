cmake_minimum_required(VERSION 3.27)
project(potato_library)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

add_library(potato_library STATIC
        Classifier.cpp
        Classifier.h
        Prediction.cpp
        Prediction.h
)

target_include_directories(potato_library PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(potato_library PRIVATE ${OpenCV_LIBS})