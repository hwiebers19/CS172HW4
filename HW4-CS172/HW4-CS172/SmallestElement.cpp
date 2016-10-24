//
//  SmallestElement.cpp
//  HW4-CS172
//
//  Created by Heidi Wiebers on 10/19/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "SmallestElement.hpp"
#include <iostream>
using namespace std;

//finds the smallest value in the array 
int smallestElement(int* Array, int size)
{

    int smallest = Array[0] ;
    for (int i=1;  i < size; ++i )
    {
        if ( Array[i] < smallest )
        {
            smallest = Array[i] ;
        }
    }
    
    return smallest;
    
}