// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: September 16
// This program calculates the surface area of a cone

#include <iostream>
#include <cmath>

int main() {
    // variable declaration
    int radius;
    int height;
    int surfaceArea;
    // input
    std::cout << "Calculating the surface area of a cone" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;
    std::cout << "Enter the height (cm): ";
    std::cin >> height;
    // process
    surfaceArea = M_PI*radius*(radius+sqrt(pow(height, 2.0)+pow(radius, 2.0)));
    // output
    std::cout << "Surface Area is " << (surfaceArea) << "cm^2" << std::endl;
}
