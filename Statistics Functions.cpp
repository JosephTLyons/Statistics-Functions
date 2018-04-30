//
//  Statistics Functions.cpp
//  Statistics Calculator
//
//  Created by Joseph Lyons on 4/25/18.
//  Copyright © 2018 Joseph Lyons. All rights reserved.
//

#include <math.h>
#include <vector>
#include "Statistics Functions.hpp"

// For vectors
double calculateSampleMean (const std::vector<int> &sample)
{
    double total = 0;
    
    for (int i = 0; i < sample.size(); i++)
        total += sample[i];
    
    return total / sample.size();
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

