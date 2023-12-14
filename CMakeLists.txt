cmake_minimum_required(VERSION 3.27)
project(patato_library)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

add_library(patato_library STATIC
        PatatoClassifier.cpp
        PatatoClassifier.h
        Prediction.cpp
        Prediction.h
        PatatoClass.cpp
        PatatoClass.h)

target_include_directories(patato_library PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(patato_library PRIVATE ${OpenCV_LIBS})