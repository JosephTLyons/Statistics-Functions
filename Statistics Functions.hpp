//
//  Statistics Functions.hpp
//  Statistics Calculator
//
//  Created by Joseph Lyons on 4/25/18.
//  Copyright © 2018 Joseph Lyons. All rights reserved.
//

#ifndef Statistics_Functions_hpp
#define Statistics_Functions_hpp

// For vectors
void printOneVariableStatistics (const std::vector<int> &sample);
double calculateSummation (const std::vector<int> &sample);
double calculateSampleMean (const std::vector<int> &sample);
double calculateSampleStandardDeviation (const std::vector<int> &sample);
double calculateSampleVariance (const std::vector<int> &sample);

// For arrays
void printOneVariableStatistics (const int sample[], const int &size);
double calculateSummation (const int sample[], const int &size);
double calculateSampleMean (const int sample[], const int &size);
double calculateSampleStandardDeviation (const int sample[], const int &size);
double calculateSampleVariance (const int sample[], const int &size);

#endif /* Statistics_Functions_hpp */
