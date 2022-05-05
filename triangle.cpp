// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Michael Clermont
// Created on: May 2022
// This program uses user defined functions

#include <iostream>
#include <string>

void CalculateArea(float base, float height) {
    // calculate area
    float area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area is " << area << " cm²" << std::endl;
}

main() {
    // this function gets length and width

    std::string baseFromUser;
    std::string heightFromUser;
    float baseFloat;
    float heightFloat;

    // input
    std::cout << "Enter the base of a rectangle (cm): ";
    std::cin >> baseFromUser;
    std::cout << "Enter the height of a rectangle (cm): ";
    std::cin >> heightFromUser;
    std::cout << std::endl;

    // process
    try {
        baseFloat = std::stof(baseFromUser);
        heightFloat = std::stof(heightFromUser);
        // call functions
        CalculateArea(baseFloat, heightFloat);
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
