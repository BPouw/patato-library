#include <opencv2/opencv.hpp>
#include "PatatoClassifier.h"
#include "Prediction.h"

PotatoClassifier::PotatoClassifier(const std::string& modelPath) : modelPath(modelPath) {
    net = cv::dnn::readNetFromONNX(modelPath);
}

Prediction PotatoClassifier::classify(const std::string& imagePath) {
    cv::Mat image = cv::imread(imagePath);

    cv::Size netInputSize(128, 128);
    cv::resize(image, image, netInputSize);

    cv::Mat blob = cv::dnn::blobFromImage(image, 1.0 / 255.0, netInputSize, cv::Scalar(0, 0, 0), true, false);

    net.setInput(blob);

    const cv::Mat& output = net.forward();

    Prediction prediction = postprocessClassification(output);

    return prediction;
}

Prediction PotatoClassifier::postprocessClassification(const cv::Mat& output) {
    std::vector<float> output_values;
    output_values.assign(output.begin<float>(), output.end<float>());

    auto max_index = std::distance(output_values.begin(), std::max_element(output_values.begin(), output_values.end()));

    auto predictedClass = static_cast<PotatoClass>(max_index);

    Prediction prediction(output_values[max_index], potatoClassToString(predictedClass), max_index);

    return prediction;
}