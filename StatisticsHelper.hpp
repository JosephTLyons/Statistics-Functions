//
//  Statistics.hpp
//  Statistics Functions
//
//  Created by Joseph Lyons on 5/1/18.
//  Copyright © 2018 Joseph Lyons. All rights reserved.
//

#ifndef Statistics_hpp
#define Statistics_hpp

#include <iostream>
#include <vector>

class StatisticsHelper
{
private:
    std::vector<int> sample;
    
    long unsigned int sampleSize;
    int sampleSum;
    double sampleMean;
    double sampleStandardDeviation;
    double sampleVariance;
    
    void init();
    int calculateSampleSum() const;
    double calculateSampleVariance() const;
    
public:
    StatisticsHelper (const std::vector<int> &inputSample);
    StatisticsHelper (const int sample[], const int &size);
    
    void printOneVariableStatistics() const;
    
    long unsigned int getSamplesize() const;
    int getSampleSum() const;
    double getSampleMean() const;
    double getSampleStandardDeviation() const;
    double getSampleVariance() const;
};

#endif /* Statistics_hpp */
