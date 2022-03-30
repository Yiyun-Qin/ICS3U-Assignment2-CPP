// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program, with proper style

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // This function calculates the surface area and the volume of a cone
    int radius;
    int height;
    float surfaceArea;
    float volume;

    // input
    std::cout << "Enter the radius of the cone you want to calculate: ";
    std::cin >> radius;
    std::cout << "Enter the height of the cone you want to calculate: ";
    std::cin >> height;

    // process
    surfaceArea = (
        M_PI
        * radius
        * (radius + pow((pow(height, 2) + pow(radius, 2)), (1.0 / 2.0))));
    volume = M_PI * pow(radius, 2) * height * (1.0 / 3.0);

    // output
    std::cout << std::endl;
    std::cout << "The surface area of the cone is "
    << std::fixed << std::setprecision(2) <<
    std::setfill('0') << surfaceArea << " cm²." << std::endl;
    std::cout << "The volume of the cone is "
    << std::fixed << std::setprecision(2) <<
    std::setfill('0') << volume << " cm³." << std::endl;

    std::cout << "\nDone." << std::endl;
}
