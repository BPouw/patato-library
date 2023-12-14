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

## Usage
**Include headers**: In your client application, include the necessary headers from the Patato library. 
```cpp
#include "PatatoClassifier.h"
#include "Prediction.h"
```
**Link against the library**:  Link your client application against the Potato library.

If you are using CMake, add the following to your CMakeLists.txt:
```cmake
add_executable(your_client_app your_client_app.cpp)
target_link_libraries(your_client_app PRIVATE patato_library)
```
Make sure to replace your_client_app with the actual name of your client application file.

**Use the library**:  Now, you can use the functionality provided by your Potato library in your client application.
```cpp
#include "PatatoClassifier.h"
#include "Prediction.h"

int main() {
    PotatoClassifier classifier("path/to/your/model.onnx");
    Prediction result = classifier.classify("path/to/your/image.jpg");

    // Use the prediction result as needed
    // ...

    return 0;
}```
