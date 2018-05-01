//
//  Statistics.cpp
//  Statistics Functions
//
//  Created by Joseph Lyons on 5/1/18.
//  Copyright © 2018 Joseph Lyons. All rights reserved.
//

#include "StatisticsHelper.hpp"
#include <math.h>
#include <iostream>
#include <vector>

int StatisticsHelper::calculateSampleSum() const
{
    int total = 0;
    
    for (int i = 0; i < sample.size(); i++)
        total += sample[i];
    
    return total;
}

double StatisticsHelper::calculateSampleVariance() const
{
    double sampleVariance = 0;
    
    for (int i = 0; i < sampleSize; i++)
        sampleVariance += pow ((sample[i] - sampleMean), 2);
    
    sampleVariance = sampleVariance / (double) (sampleSize - 1);
    
    return sampleVariance;
}

void StatisticsHelper::init()
{
    sampleSize = sample.size();
    sampleSum = calculateSampleSum();
    sampleMean = sampleSum / (double) sampleSize;
    sampleVariance = calculateSampleVariance();
    sampleStandardDeviation = sqrt (sampleVariance);
}

StatisticsHelper::StatisticsHelper (const std::vector<int> &inputSample)
{
    sample = inputSample;
    init();
}

StatisticsHelper::StatisticsHelper (const int inputSample[], const int &inputSize)
{
    sample = std::vector<int> (inputSample, inputSample + inputSize);
    init();
}

void StatisticsHelper::printOneVariableStatistics() const
{
    std::cout << "One Variable Statistics:" << std::endl << std::endl;
    std::cout << "Sample Mean: " << sampleMean << std::endl;
    std::cout << "Sample Summation: " << sampleSum << std::endl;
    std::cout << "Sample Standard Deviation: " << sampleStandardDeviation << std::endl;
    std::cout << "Sample Size: " << sampleSize << std::endl << std::endl;
}

long unsigned int StatisticsHelper::getSamplesize() const
{
    return sampleSize;
}

int StatisticsHelper::getSampleSum() const
{
    return sampleSum;
}

double StatisticsHelper::getSampleMean() const
{
    return sampleMean;
}

double StatisticsHelper::getSampleStandardDeviation() const
{
    return sampleStandardDeviation;
}

double StatisticsHelper::getSampleVariance() const
{
    return sampleVariance;
}
