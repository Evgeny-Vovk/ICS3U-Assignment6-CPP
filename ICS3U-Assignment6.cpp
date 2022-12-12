// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : December 2022
// ICS3U-Unit5-04.cpp File, learning functions with parameters in C++.

#include <cmath>
#include <iostream>
#include <string>

float area(float radiusAsFloat, float heightAsFloat) {
    // variables
    float surface_area;

    // process and output
    surface_area = (
        pow(radiusAsFloat, 2) * M_PI * 2.0 +
        radiusAsFloat * heightAsFloat * M_PI * 2.0);
    return surface_area;
}

int main() {
    // creating variables
    std::string(radius);
    std::string(height);
    float radiusAsFloat;
    float heightAsFloat;
    float surface_area;

    // input
    std::cout << "Enter the radius of a cylinder(cm): ";
    std::cin >> radius;
    std::cout << "Enter the height of a cylinder(cm): ";
    std::cin >> height;
    std::cout << "\n";

    // process
    try {
        radiusAsFloat = std::stof(radius);
        heightAsFloat = std::stof(height);
        if (radiusAsFloat <= 0 || heightAsFloat <= 0) {
            std::cout << "A cylinder cannot have a height or "
                      << "a base with a value that's equal or less than 0.";
        } else {
            surface_area = area(radiusAsFloat, heightAsFloat);
            surface_area = 100 * round(surface_area) / 100.0;
            std::cout
                << "The surface area of the cylinder is "
                << surface_area << " cm².";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again.";
    }

    std::cout << "\n\n\nDone.\n";
}
