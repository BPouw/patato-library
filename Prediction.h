/**
 * @file Prediction.h
 * @brief Declaration of Prediction class.
 */

#pragma once

#include <string>

/**
 * @class Prediction
 * @brief A class representing the result of a classification.
 *
 * This class holds information about the probability, predicted class label,
 * and the index of the predicted class in a classification result.
 */
class Prediction {
public:
    /**
     * @brief Constructor for Prediction.
     * @param probability The probability of the predicted class.
     * @param predictedClass The label of the predicted class.
     * @param classIndex The index of the predicted class.
     */
    Prediction(double probability, std::string predictedClass, uint8_t classIndex);

    double probability;      ///< The probability of the predicted class.
    std::string predictedClass; ///< The label of the predicted class.
    uint8_t classIndex;      ///< The index of the predicted class.
};