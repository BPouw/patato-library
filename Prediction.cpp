
#include "Prediction.h"

#include <utility>

Prediction::Prediction(double probability, std::string predictedClass, uint8_t classIndex)
        : probability(probability), predictedClass(std::move(predictedClass)), classIndex(classIndex) {}
