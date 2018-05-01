//
//  Statistics.cpp
//  Statistics Functions
//
//  Created by Joseph Lyons on 5/1/18.
//  Copyright © 2018 Joseph Lyons. All rights reserved.
//

#include "Statistics.hpp"
#include <math.h>
#include <iostream>
#include <vector>

int Statistics::calculateSummation()
{
    int total = 0;
    
    for (int i = 0; i < sample.size(); i++)
        total += sample[i];
    
    return total;
}

double Statistics::calculateSampleVariance()
{
    double sampleVariance = 0;
    
    for (int i = 0; i < sampleSize; i++)
        sampleVariance += pow ((sample[i] - sampleSize), 2);
    
    sampleVariance = sampleVariance / (double) (sampleSize - 1);
    
    return sampleVariance;
}

void Statistics::init()
{
    sampleSize = sample.size();
    sum = calculateSummation();
    sampleMean = sum / (double) sample.size();
    sampleVariance = calculateSampleVariance();
    sampleStandardDeviation = sqrt (sampleVariance);
}

Statistics::Statistics (const std::vector<int> &inputSample)
{
    sample = inputSample;
    init();
}

Statistics::Statistics (const int sample[], const int &size)
{
    //sample = std::vector<int> (sample, sample + size);
    init();
}

void Statistics::printOneVariableStatistics() const
{
    std::cout << "Sample Mean: " << sampleMean << std::endl;
    std::cout << "Summation: " << sum << std::endl;
    std::cout << "Standard Deviation: " << sampleStandardDeviation << std::endl;
    std::cout << "n: " << sampleSize << std::endl << std::endl;
}

long unsigned int Statistics::getSamplesize() const
{
    return sampleSize;
}

int Statistics::getSum() const
{
    return sum;
}

double Statistics::getSampleMean() const
{
    return sampleMean;
}

double Statistics::getSampleStandardDeviation() const
{
    return sampleStandardDeviation;
}

double Statistics::getSampleVariance() const
{
    return sampleVariance;
}
