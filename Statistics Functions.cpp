//
//  Statistics Functions.cpp
//  Statistics Calculator
//
//  Created by Joseph Lyons on 4/25/18.
//  Copyright © 2018 Joseph Lyons. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <vector>
#include "Statistics Functions.hpp"

// For vectors
void printOneVariableStatistics (const std::vector<int> &sample)
{
    std::cout << "Sample Mean: " << calculateSampleMean (sample) << std::endl;
    std::cout << "Summation: " << calculateSummation (sample) << std::endl;
    std::cout << "Standard Deviation: " << calculateSampleStandardDeviation (sample) << std::endl;
    std::cout << "n: " << sample.size() << std::endl << std::endl;
    
}

double calculateSummation (const std::vector<int> &sample)
{
    int total = 0;
    
    for (int i = 0; i < sample.size(); i++)
        total += sample[i];
    
    return total;
}

double calculateSampleMean (const std::vector<int> &sample)
{
    return calculateSummation (sample) / sample.size();
}

double calculateSampleStandardDeviation (const std::vector<int> &sample)
{
    return sqrt (calculateSampleVariance (sample));
}

double calculateSampleVariance (const std::vector<int> &sample)
{
    double sampleVariance = 0;
    double sampleMean = calculateSampleMean (sample);
    
    for (int i = 0; i < sample.size(); i++)
        sampleVariance += pow ((sample[i] - sampleMean), 2);
    
    sampleVariance = sampleVariance / (double) (sample.size() - 1);
    
    return sampleVariance;
}

// For arrays
// This might not be the most performant wayt to do this,
// but it keeps code maintenance simple
void printOneVariableStatistics (const int sample[], const int &size)
{
    printOneVariableStatistics (std::vector<int> (sample, sample + size));
}

double calculateSummation (const int sample[], const int &size)
{
    return calculateSummation (std::vector<int> (sample, sample + size));
}

double calculateSampleMean (const int sample[], const int &size)
{
    return calculateSampleMean (std::vector<int> (sample, sample + size));
}

double calculateSampleStandardDeviation (const int sample[], const int &size)
{
    return calculateSampleStandardDeviation (std::vector<int> (sample, sample + size));
}

double calculateSampleVariance (const int sample[], const int &size)
{
    return calculateSampleVariance (std::vector<int> (sample, sample + size));
}

