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

int Statistics::calculateSampleSum() const
{
    int total = 0;
    
    for (int i = 0; i < sample.size(); i++)
        total += sample[i];
    
    return total;
}

double Statistics::calculateSampleVariance() const
{
    double sampleVariance = 0;
    
    for (int i = 0; i < sampleSize; i++)
        sampleVariance += pow ((sample[i] - sampleMean), 2);
    
    sampleVariance = sampleVariance / (double) (sampleSize - 1);
    
    return sampleVariance;
}

void Statistics::init()
{
    sampleSize = sample.size();
    sampleSum = calculateSampleSum();
    sampleMean = sampleSum / (double) sample.size();
    sampleVariance = calculateSampleVariance();
    sampleStandardDeviation = sqrt (sampleVariance);
}

Statistics::Statistics (const std::vector<int> &inputSample)
{
    sample = inputSample;
    init();
}

Statistics::Statistics (const int inputSample[], const int &inputSize)
{
    sample = std::vector<int> (inputSample, inputSample + inputSize);
    init();
}

void Statistics::printOneVariableStatistics() const
{
    std::cout << "One Variable Statistics:" << std::endl;
    std::cout << "Sample Mean: " << sampleMean << std::endl;
    std::cout << "Sample Summation: " << sampleSum << std::endl;
    std::cout << "Sample Standard Deviation: " << sampleStandardDeviation << std::endl;
    std::cout << "Sample Size: " << sampleSize << std::endl << std::endl;
}

long unsigned int Statistics::getSamplesize() const
{
    return sampleSize;
}

int Statistics::getSum() const
{
    return sampleSum;
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
