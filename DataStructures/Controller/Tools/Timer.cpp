//
//  Timer.cpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 2/5/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}
void Timer:: resetTimer()
{
    executionTime = 0;
}
void Timer:: startTimer()
{
    executionTime = clock();
}
void Timer:: stopTimer()
{
    assert(executionTime != 0);
    executionTime = clock() - executionTime;
}
void Timer:: displayInformation()
{
    cout << "the execution time is: " << executionTime << endl;
    cout << "in human time it is: " << double(executionTime)/CLOCKS_PER_SEC << "seconds" << endl;
}

long Timer:: getTimeInMicroseconds()
{
    return executionTime;
}
