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

class Statistics
{
private:
    std::vector<int> sample;
    
    long unsigned int sampleSize;
    int sum;
    double sampleMean;
    double sampleStandardDeviation;
    double sampleVariance;
    
    void init();
    int calculateSummation() const;
    double calculateSampleVariance() const;
public:
    Statistics (const std::vector<int> &inputSample);
    Statistics (const int sample[], const int &size);
    
    void printOneVariableStatistics() const;
    
    long unsigned int getSamplesize() const;
    int getSum() const;
    double getSampleMean() const;
    double getSampleStandardDeviation() const;
    double getSampleVariance() const;
};

#endif /* Statistics_hpp */
