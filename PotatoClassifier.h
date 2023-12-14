/**
 * @file PotatoClassifier.h
 * @brief Declaration of PotatoClassifier class.
 */

#pragma once

#include <opencv2/opencv.hpp>
#include <vector>
#include <string>
#include "Prediction.h"
#include "PotatoClass.h"

/**
 * @class PotatoClassifier
 * @brief A class for image classification using a pre-trained neural network model.
 *
 * This class uses OpenCV's DNN module to load a neural network model from an ONNX file
 * and performs image classification based on the given model.
 */
class PotatoClassifier {
public:
    /**
     * @brief Constructor for PotatoClassifier.
     * @param modelPath The path to the ONNX model file.
     */
    explicit PotatoClassifier(const std::string& modelPath);

    /**
     * @brief Classify an image using the loaded model.
     * @param imagePath The path to the input image file.
     * @return A Prediction object containing the classification result.
     */
    Prediction classify(const std::string& imagePath);

private:
    std::string modelPath; ///< The path to the ONNX model file.
    cv::dnn::Net net;      ///< Neural network model.
    static Prediction postprocessClassification(const cv::Mat& output);
};