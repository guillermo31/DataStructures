//
//  LinearTester.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 2/13/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp

#include <iostream>
#include "../Controller/Tools/Timer.hpp"
#include "../Model/Linear/LinkedList.hpp"
#include "../Model/Linear/Stack.hpp"
#include "../Model/Linear/Stack.hpp"
#include "../Model/Linear/Queue.hpp"
#include "../Model/Linear/Array.hpp"
#include "../Resources/CrimeData.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Linear/CircularList.hpp"


using namespace std;

class LinearTester
{
public:
    void testVsSTL();
    void testVsStack();
    void testVsQueue();
    void testVsDouble();
};

#endif /* LinearTester_hpp */
