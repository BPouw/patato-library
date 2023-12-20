/**
 * @file Classifier.h
 * @brief Declaration of Classifier class.
 */

#pragma once

#include <opencv2/opencv.hpp>
#include <vector>
#include <string>
#include "Prediction.h"

/**
 * @class Classifier
 * @brief A class for image classification using a pre-trained neural network model.
 *
 * This class uses OpenCV's DNN module to load a neural network model from an ONNX file
 * and performs image classification based on the given model.
 */
class Classifier {
public:
    /**
     * @brief Constructor for Classifier.
     * @param modelPath The path to the ONNX model file.
     */
    explicit Classifier(const std::string& modelPath);

    /**
     * @brief Classify an image using the loaded model.
     * @param imagePath The path to the input image file.
     * @return A Prediction object containing the classification result.
     */
    Prediction classify(const std::string& imagePath, int width, int height);

private:
    std::string modelPath; ///< The path to the ONNX model file.
    cv::dnn::Net net;      ///< Neural network model.
    static Prediction postprocessClassification(const cv::Mat& output);
};