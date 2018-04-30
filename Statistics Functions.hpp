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
double calculateSampleMean (const std::vector<int> &sample);
double calculateSampleStandardDeviation (const std::vector<int> &sample);
double calculateSampleVariance (const std::vector<int> &sample);

// For arrays
double calculateSampleMean (const int sample[], const int &size);
double calculateSampleStandardDeviation (const int sample[], const int &size);
double calculateSampleVariance (const int sample[], const int &size);

#endif /* Statistics_Functions_hpp */
