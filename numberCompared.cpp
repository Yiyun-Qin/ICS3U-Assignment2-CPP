// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program, comparing the number and 0

#include <iostream>

int main() {
    // This function compares the number and 0
    int numberCompared;

    // input
    std::cout << "Enter the integer you want to check: ";
    std::cin >> numberCompared;

    // process
    std::cout << "" << std::endl;
    if (numberCompared > 0) {
        // output
        std::cout << numberCompared << " is a positive number.";
    } else if (numberCompared < 0) {
        std::cout << numberCompared << " is a negative number.";
    } else {
        std::cout << numberCompared << " is just 0!";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
