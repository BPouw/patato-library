# Potato Library

A custom C++ library for RMA-techniek used to classify defects in patatos.

## Prerequisites

Before using this library, ensure that you have OpenCV installed.

```bash
# On Ubuntu
sudo apt-get install libopencv-dev

# On macOS
brew install opencv
```

## Installation
Clone this repository and add the folder to your project e.g. 
```bash
your_project/libs/potato-library
```


## Usage
**Include headers**: In your client application, include the necessary headers from the Potato library. 
```cpp
#include "libs/potato-library/PotatoClassifier.h"
#include "libs/potato-library/Prediction.h"
```
**Add the openCV dependency to your project**

Add the following to your CMakeList.txt:
```cmake
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(your_client_app PRIVATE ${OpenCV_LIBS})
```
**Link against the library**

Link your client application against the Potato library.

Add the following to your CMakeLists.txt:
```cmake
add_library(your_client_app STATIC
        libs/potato-library/PotatoClassifier.cpp
        libs/potato-library/PotatoClassifier.h
        libs/potato-library/Prediction.cpp
        libs/potato-library/Prediction.h
        libs/potato-library/PotatoClass.cpp
        libs/potato-library/PotatoClass.h)

target_include_directories(your_client_app PRIVATE libs/potato-library)

target_link_libraries(your_client_app PRIVATE potato_library)
```
Make sure to replace your_client_app with the actual name of your client application file.

**Use the library**:  Now, you can use the functionality provided by your Potato library in your client application.
```cpp
int main() {
    PotatoClassifier classifier("path/to/your/model.onnx");
    Prediction result = classifier.classify("path/to/your/image.jpg");

    // Use the prediction result as needed
    // ...

    return 0;
}```
